/*******************************************************************************
 * Copyright (c) 2016 - 2017 fortiss GmbH
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *    Ben Schneider
 *      - initial implementation and documentation
 *******************************************************************************/

#include "ROSManager.h"
#include <ros/ros.h>
#include <extevhandlerhelper.h>

#include "TRIGGER_SERVICE_SERVER.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "TRIGGER_SERVICE_SERVER_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_TRIGGER_SERVICE_SERVER, g_nStringIdTRIGGER_SERVICE_SERVER)

const CStringDictionary::TStringId FORTE_TRIGGER_SERVICE_SERVER::scm_anDataInputNames[] = { g_nStringIdQI, g_nStringIdNAMESPACE, g_nStringIdSRVNAME, g_nStringIdSUCCESS, g_nStringIdMESSAGE };

const CStringDictionary::TStringId FORTE_TRIGGER_SERVICE_SERVER::scm_anDataInputTypeIds[] = { g_nStringIdBOOL, g_nStringIdSTRING, g_nStringIdSTRING, g_nStringIdBOOL, g_nStringIdSTRING };

const CStringDictionary::TStringId FORTE_TRIGGER_SERVICE_SERVER::scm_anDataOutputNames[] = { g_nStringIdQO, g_nStringIdSTATUS };

const CStringDictionary::TStringId FORTE_TRIGGER_SERVICE_SERVER::scm_anDataOutputTypeIds[] = { g_nStringIdBOOL, g_nStringIdSTRING };

const TForteInt16 FORTE_TRIGGER_SERVICE_SERVER::scm_anEIWithIndexes[] = { 0, 4 };
const TDataIOID FORTE_TRIGGER_SERVICE_SERVER::scm_anEIWith[] = { 0, 1, 2, 255, 0, 3, 4, 255 };
const CStringDictionary::TStringId FORTE_TRIGGER_SERVICE_SERVER::scm_anEventInputNames[] = { g_nStringIdINIT, g_nStringIdRSP };

const TDataIOID FORTE_TRIGGER_SERVICE_SERVER::scm_anEOWith[] = { 0, 1, 255, 0, 1, 255 };
const TForteInt16 FORTE_TRIGGER_SERVICE_SERVER::scm_anEOWithIndexes[] = { 0, 3, -1 };
const CStringDictionary::TStringId FORTE_TRIGGER_SERVICE_SERVER::scm_anEventOutputNames[] = { g_nStringIdINITO, g_nStringIdIND };

const SFBInterfaceSpec FORTE_TRIGGER_SERVICE_SERVER::scm_stFBInterfaceSpec = { 2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes, 2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes, 5, scm_anDataInputNames, scm_anDataInputTypeIds, 2, scm_anDataOutputNames, scm_anDataOutputTypeIds, 0, 0 };

void FORTE_TRIGGER_SERVICE_SERVER::executeEvent(int pa_nEIID){
  switch (pa_nEIID){
    case scm_nEventINITID:
      //initiate
      if(!m_Initiated && QI()){

        m_RosNamespace = getExtEvHandler<CROSManager>(*this).ciecStringToStdString(NAMESPACE());
        m_RosMsgName = getExtEvHandler<CROSManager>(*this).ciecStringToStdString(SRVNAME());
        m_nh = new ros::NodeHandle(m_RosNamespace);
        m_triggerServer = m_nh->advertiseService < FORTE_TRIGGER_SERVICE_SERVER > (m_RosMsgName, &FORTE_TRIGGER_SERVICE_SERVER::triggerCallback, const_cast<FORTE_TRIGGER_SERVICE_SERVER*>(this));
        m_Initiated = true;
        STATUS() = "Server initiated";
        QO() = true;
      }
      //terminate
      else if(m_Initiated && !QI()){
        m_nh->shutdown();
        STATUS() = "Server terminated";
        QO() = false;
      }
      else{
        STATUS() = "initiation or termination failed";
        QO() = false;
      }
      sendOutputEvent(scm_nEventINITOID);
      break;

    case scm_nEventRSPID:
      STATUS() = "Processing service request finished";
      m_ResponseAvailable = true;
      break;

    case cg_nExternalEventID:
      QO() = true;
      sendOutputEvent(scm_nEventINDID);
      break;
  }
}

//TODO use or delete first parameter
bool FORTE_TRIGGER_SERVICE_SERVER::triggerCallback(std_srvs::Trigger::Request &, std_srvs::Trigger::Response &pa_resp){
  setEventChainExecutor(m_poInvokingExecEnv);
  getExtEvHandler<CROSManager>(*this).startChain(this);

  // is a response available
  ros::Rate r(2); //1Hz
  while(!m_ResponseAvailable){
    r.sleep();
  }

  //write response
  pa_resp.success = SUCCESS();
  pa_resp.message = getExtEvHandler<CROSManager>(*this).ciecStringToStdString(MESSAGE());

  m_ResponseAvailable = false;

  return true;
}
