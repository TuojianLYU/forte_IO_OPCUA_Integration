/*******************************************************************************
 * Copyright (c) 2019 fortiss GmbH
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *   Jose Cabral - initial API and implementation and/or initial documentation
 *******************************************************************************/

#ifndef _PLC01A1_H_
#define _PLC01A1_H_

#include <funcbloc.h>
#include <forte_bool.h>
#include <forte_uint.h>
#include <forte_wstring.h>
#include <io/configFB/io_configFB_controller.h>

class PLC01A1ConfigFB : public forte::core::io::IOConfigFBController {
  DECLARE_FIRMWARE_FB(PLC01A1ConfigFB)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &QI() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_WSTRING &IN1() {
    return *static_cast<CIEC_WSTRING*>(getDI(1));
  };

  CIEC_WSTRING &IN2() {
    return *static_cast<CIEC_WSTRING*>(getDI(2));
  };

  CIEC_WSTRING &IN3() {
    return *static_cast<CIEC_WSTRING*>(getDI(3));
  };

  CIEC_WSTRING &IN4() {
    return *static_cast<CIEC_WSTRING*>(getDI(4));
  };

  CIEC_WSTRING &IN5() {
    return *static_cast<CIEC_WSTRING*>(getDI(5));
  };

  CIEC_WSTRING &IN6() {
    return *static_cast<CIEC_WSTRING*>(getDI(6));
  };

  CIEC_WSTRING &IN7() {
    return *static_cast<CIEC_WSTRING*>(getDI(7));
  };

  CIEC_WSTRING &IN8() {
    return *static_cast<CIEC_WSTRING*>(getDI(8));
  };

  CIEC_WSTRING &OUT1() {
    return *static_cast<CIEC_WSTRING*>(getDI(9));
  };

  CIEC_WSTRING &OUT2() {
    return *static_cast<CIEC_WSTRING*>(getDI(10));
  };

  CIEC_WSTRING &OUT3() {
    return *static_cast<CIEC_WSTRING*>(getDI(11));
  };

  CIEC_WSTRING &OUT4() {
    return *static_cast<CIEC_WSTRING*>(getDI(12));
  };

  CIEC_WSTRING &OUT5() {
    return *static_cast<CIEC_WSTRING*>(getDI(13));
  };

  CIEC_WSTRING &OUT6() {
    return *static_cast<CIEC_WSTRING*>(getDI(14));
  };

  CIEC_WSTRING &OUT7() {
    return *static_cast<CIEC_WSTRING*>(getDI(15));
  };

  CIEC_WSTRING &OUT8() {
    return *static_cast<CIEC_WSTRING*>(getDI(16));
  };

  CIEC_UINT &UpdateInterval() {
    return *static_cast<CIEC_UINT*>(getDI(17));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &QO() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_WSTRING &STATUS() {
    return *static_cast<CIEC_WSTRING*>(getDO(1));
  };

  static const TEventID scm_nEventINITID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventINDID = 1;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(2, 18, 2, 0);

virtual void setInitialValues();

  protected:
    forte::core::io::IODeviceController* createDeviceController(CDeviceExecution &paDeviceExecution);
  
    void setConfig();

    virtual void onStartup();

  public:
    FUNCTION_BLOCK_CTOR_WITH_BASE_CLASS(PLC01A1ConfigFB, forte::core::io::IOConfigFBController){}

};

#endif //close the ifdef sequence from the beginning of the file

