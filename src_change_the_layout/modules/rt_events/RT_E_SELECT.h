/*******************************************************************************
 * Copyright (c) 2006 - 2011 ACIN, Profactor GmbH
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *   Alois Zoitl, Gerhard Ebenhofer, Ingo Hegny
 *    - initial API and implementation and/or initial documentation
 *******************************************************************************/
#ifndef _RT_E_SELECT_H_
#define _RT_E_SELECT_H_

#include "rtesingle.h"

class FORTE_RT_E_SELECT: public CRTEventSingle{
  DECLARE_FIRMWARE_FB(FORTE_RT_E_SELECT)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &QI() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_BOOL &G() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  };

  CIEC_TIME &Tmin() {
    return *static_cast<CIEC_TIME*>(getDI(2));
  };

  CIEC_TIME &Deadline() {
    return *static_cast<CIEC_TIME*>(getDI(3));
  };

  CIEC_TIME &WCET() {
    return *static_cast<CIEC_TIME*>(getDI(4));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &QO() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventEI0ID = 1;
  static const TEventID scm_nEventEI1ID = 2;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventEOID = 1;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(2, 5, 1, 0);

   virtual bool checkActivation(int pa_nEIID);

public:
  FORTE_RT_E_SELECT(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes);
  virtual ~FORTE_RT_E_SELECT(){};

};

#endif //close the ifdef sequence from the beginning of the file

