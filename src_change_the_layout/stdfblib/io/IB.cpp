/*************************************************************************
 * Copyright (c) 2018 TU Wien/ACIN
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *   Martin Melik-Merkumians - adds intial implememtation
 *************************************************************************/

#include "IB.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "IB_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_IB, g_nStringIdIB)

const CStringDictionary::TStringId FORTE_IB::scm_anDataInputNames[] = { g_nStringIdQI, g_nStringIdPARAMS };

const CStringDictionary::TStringId FORTE_IB::scm_anDataInputTypeIds[] = { g_nStringIdBOOL, g_nStringIdSTRING };

const CStringDictionary::TStringId FORTE_IB::scm_anDataOutputNames[] = { g_nStringIdQO, g_nStringIdSTATUS, g_nStringIdIN };

const CStringDictionary::TStringId FORTE_IB::scm_anDataOutputTypeIds[] = { g_nStringIdBOOL, g_nStringIdSTRING, g_nStringIdBYTE };

const TForteInt16 FORTE_IB::scm_anEIWithIndexes[] = { 0, 3 };
const TDataIOID FORTE_IB::scm_anEIWith[] = { 0, 1, 255, 0, 255 };
const CStringDictionary::TStringId FORTE_IB::scm_anEventInputNames[] = { g_nStringIdINIT, g_nStringIdREQ };

const TDataIOID FORTE_IB::scm_anEOWith[] = { 0, 1, 255, 0, 1, 2, 255 };
const TForteInt16 FORTE_IB::scm_anEOWithIndexes[] = { 0, 3, -1 };
const CStringDictionary::TStringId FORTE_IB::scm_anEventOutputNames[] = { g_nStringIdINITO, g_nStringIdCNF };

const SFBInterfaceSpec FORTE_IB::scm_stFBInterfaceSpec = { 2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes, 2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes, 2, scm_anDataInputNames, scm_anDataInputTypeIds, 3, scm_anDataOutputNames, scm_anDataOutputTypeIds, 0, 0 };

void FORTE_IB::executeEvent(int pa_nEIID){
  QO() = QI();
  switch(pa_nEIID){
    case cg_nExternalEventID:
      sendOutputEvent(scm_nEventINDID);
      break;
    case scm_nEventINITID:
      if(true == QI()){
        QO() = CProcessInterface::initialise(true);  //initialise as input
      }
      else{
        QO() = CProcessInterface::deinitialise();
      }
      sendOutputEvent(scm_nEventINITOID);
      break;
    case scm_nEventREQID:
      if(true == QI()){
        QO() = CProcessInterface::readByte();
      }
      sendOutputEvent(scm_nEventCNFID);
      break;
  }}

