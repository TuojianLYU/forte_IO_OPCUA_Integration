/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: IX
 *** Description: Service Interface Function Block Type
 *** Version:
***     1.0: 2021-09-29/Tuojian Lyu -  - 
 *************************************************************************/

#include "IX.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "IX_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_IX, g_nStringIdIX)

const CStringDictionary::TStringId FORTE_IX::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdPARAMS};

const CStringDictionary::TStringId FORTE_IX::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING};

const CStringDictionary::TStringId FORTE_IX::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS, g_nStringIdIN};

const CStringDictionary::TStringId FORTE_IX::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING, g_nStringIdBOOL};

const TDataIOID FORTE_IX::scm_anEIWith[] = {0, 1, 255, 0, 255};
const TForteInt16 FORTE_IX::scm_anEIWithIndexes[] = {0, 3};
const CStringDictionary::TStringId FORTE_IX::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_IX::scm_anEOWith[] = {0, 1, 255, 0, 1, 2, 255, 0, 1, 2, 255};
const TForteInt16 FORTE_IX::scm_anEOWithIndexes[] = {0, 3, 7};
const CStringDictionary::TStringId FORTE_IX::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF, g_nStringIdIND};


const SFBInterfaceSpec FORTE_IX::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  3, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_IX::executeEvent(int pa_nEIID) {
   switch(pa_nEIID) {
    case scm_nEventINITID:
	st_IN() = false;
	st_QO() = true;
	sendOutputEvent(scm_nEventINITOID);
      break;
    case scm_nEventREQID:
	st_IN() = false;
	st_QO() = true;
	sendOutputEvent(scm_nEventINDID);
      break;
  }
}


