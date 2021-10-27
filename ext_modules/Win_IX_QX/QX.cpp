/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: QX
 *** Description: Service Interface Function Block Type
 *** Version:
***     1.0: 2015-09-22/Gerd Kainz - fortiss GmbH - 
***     1.1: 2016-07-18/Alois Zoitl - fortiss GmbH - 
 *************************************************************************/

#include "QX.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "QX_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_QX, g_nStringIdQX)

const CStringDictionary::TStringId FORTE_QX::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdPARAMS, g_nStringIdOUT};

const CStringDictionary::TStringId FORTE_QX::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING, g_nStringIdWORD};

const CStringDictionary::TStringId FORTE_QX::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS};

const CStringDictionary::TStringId FORTE_QX::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING};

const TDataIOID FORTE_QX::scm_anEIWith[] = {0, 1, 255, 0, 2, 255};
const TForteInt16 FORTE_QX::scm_anEIWithIndexes[] = {0, 3};
const CStringDictionary::TStringId FORTE_QX::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_QX::scm_anEOWith[] = {0, 1, 255, 0, 1, 255};
const TForteInt16 FORTE_QX::scm_anEOWithIndexes[] = {0, 3};
const CStringDictionary::TStringId FORTE_QX::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};


const SFBInterfaceSpec FORTE_QX::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_QX::executeEvent(int pa_nEIID) {
   switch(pa_nEIID) {
    case scm_nEventINITID:
	st_OUT() = false;
	st_QO() = true;
	sendOutputEvent(scm_nEventINITOID);
      break;
    case scm_nEventREQID:
	st_OUT() = false;
	st_QO() = true;
	sendOutputEvent(scm_nEventCNFID);
      break;
  }
}


