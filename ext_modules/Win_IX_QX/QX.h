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

#ifndef _QX_H_
#define _QX_H_

#include "funcbloc.h"
#include "forte_bool.h"
#include "forte_string.h"
#include "forte_word.h"
#include "forte_array_at.h"


class FORTE_QX: public CFunctionBlock {
  DECLARE_FIRMWARE_FB(FORTE_QX)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventCNFID = 1;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

  CIEC_BOOL &st_QI() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  }
  
  CIEC_STRING &st_PARAMS() {
    return *static_cast<CIEC_STRING*>(getDI(1));
  }
  
  CIEC_WORD &st_OUT() {
    return *static_cast<CIEC_WORD*>(getDI(2));
  }
  
  CIEC_BOOL &st_QO() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_STRING &st_STATUS() {
    return *static_cast<CIEC_STRING*>(getDO(1));
  }
  

  FORTE_FB_DATA_ARRAY(2, 3, 2, 0);

  void executeEvent(int pa_nEIID);

public:
   FORTE_QX(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
       CFunctionBlock( pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, m_anFBConnData, m_anFBVarsData) {
   };

  virtual ~FORTE_QX() = default;
};

#endif // _QX_H_


