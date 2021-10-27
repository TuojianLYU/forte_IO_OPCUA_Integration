/*******************************************************************************
 * Copyright (c) 2011 - 2013 ACIN, Profactor GmbH
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *   Monika Wenger, Alois Zoitl, Matthias Plasch, Gerhard Ebenhofer
 *   - initial API and implementation and/or initial documentation
 *******************************************************************************/
#ifndef _F_MIN_H_
#define _F_MIN_H_

#include <funcbloc.h>

class FORTE_F_MIN: public CFunctionBlock{
  DECLARE_FIRMWARE_FB(FORTE_F_MIN)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_ANY_ELEMENTARY &IN1() {
    return *static_cast<CIEC_ANY_ELEMENTARY*>(getDI(0));
  };

  CIEC_ANY_ELEMENTARY &IN2() {
    return *static_cast<CIEC_ANY_ELEMENTARY*>(getDI(1));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_ANY_ELEMENTARY &st_OUT() {
    return *static_cast<CIEC_ANY_ELEMENTARY*>(getDO(0));
  };

  static const TEventID scm_nEventREQID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCNFID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 2, 1, 0);

  void executeEvent(int pa_nEIID);



public:
  FUNCTION_BLOCK_CTOR(FORTE_F_MIN){
  };

  template<typename T> void calculateValue(){
    T oMin;
    T oMax;

    oMin.saveAssign(IN1());
    oMax.saveAssign(IN2());

    st_OUT().saveAssign(MIN<T> (oMin, oMax));
  }

  template<typename T> void calculateValueString() const {
    //TODO fill this function
  }

  virtual ~FORTE_F_MIN(){};

};

#endif //close the ifdef sequence from the beginning of the file

