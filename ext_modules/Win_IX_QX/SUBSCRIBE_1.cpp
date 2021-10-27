/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: SUBSCRIBE_1
 *** Description: 
 *** Version:
***     1.0: 2017-10-25/Alois Zoitl - fortiss GmbH - initial API and implementation and/or initial documentation
 *************************************************************************/

#include "SUBSCRIBE_1.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "SUBSCRIBE_1_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_SUBSCRIBE_1, g_nStringIdSUBSCRIBE_1)

const CStringDictionary::TStringId FORTE_SUBSCRIBE_1::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdID};

const CStringDictionary::TStringId FORTE_SUBSCRIBE_1::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_SUBSCRIBE_1::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS, g_nStringIdRD_1};

const CStringDictionary::TStringId FORTE_SUBSCRIBE_1::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdANY};

const TDataIOID FORTE_SUBSCRIBE_1::scm_anEIWith[] = {0, 1, 255, 0, 255};
const TForteInt16 FORTE_SUBSCRIBE_1::scm_anEIWithIndexes[] = {0, 3};
const CStringDictionary::TStringId FORTE_SUBSCRIBE_1::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdRSP};

const TDataIOID FORTE_SUBSCRIBE_1::scm_anEOWith[] = {0, 1, 255, 0, 1, 2, 255};
const TForteInt16 FORTE_SUBSCRIBE_1::scm_anEOWithIndexes[] = {0, 3};
const CStringDictionary::TStringId FORTE_SUBSCRIBE_1::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdIND};


const SFBInterfaceSpec FORTE_SUBSCRIBE_1::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_SUBSCRIBE_1::executeEvent(int pa_nEIID) {
  switch(pa_nEIID) {
    case scm_nEventINITID:
      #error add code for INIT event!
      /*
        do not forget to send output event, calling e.g.
          sendOutputEvent(scm_nEventCNFID);
      */
      break;
    case scm_nEventRSPID:
      #error add code for RSP event!
      /*
        do not forget to send output event, calling e.g.
          sendOutputEvent(scm_nEventCNFID);
      */
      break;
  }
}


