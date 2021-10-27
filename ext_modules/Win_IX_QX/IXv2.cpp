/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: IXv2
 *** Description: Service Interface Function Block Type
 *** Version:
***     1.0: 2021-09-29/Tuojian Lyu -  - 
 *************************************************************************/

#include "IXv2.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "IXv2_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_IXv2, g_nStringIdIXv2)

const CStringDictionary::TStringId FORTE_IXv2::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdPARAMS};

const CStringDictionary::TStringId FORTE_IXv2::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING};

const CStringDictionary::TStringId FORTE_IXv2::scm_anDataOutputNames[] = {g_nStringIdQO, g_nStringIdSTATUS, g_nStringIdIN};

const CStringDictionary::TStringId FORTE_IXv2::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING, g_nStringIdBOOL};

const TDataIOID FORTE_IXv2::scm_anEIWith[] = {0, 1, 255, 0, 255};
const TForteInt16 FORTE_IXv2::scm_anEIWithIndexes[] = {0, 3};
const CStringDictionary::TStringId FORTE_IXv2::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_IXv2::scm_anEOWith[] = {0, 1, 255, 0, 1, 2, 255, 0, 1, 2, 255};
const TForteInt16 FORTE_IXv2::scm_anEOWithIndexes[] = {0, 3, 7};
const CStringDictionary::TStringId FORTE_IXv2::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF, g_nStringIdIND};


const SFBInterfaceSpec FORTE_IXv2::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  3, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  2, scm_anDataInputNames, scm_anDataInputTypeIds,
  3, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_IXv2::executeEvent(int pa_nEIID) {
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


