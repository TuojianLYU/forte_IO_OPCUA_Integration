/*******************************************************************************
 * Copyright (c) 2006 - 2011 ACIN, Profactor GmbH
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *   Rene Smodic, Alois Zoitl, Gerhard Ebenhofer, Ingo Hegny,
 *   Martin Melik Merkumians
 *    - initial API and implementation and/or initial documentation
 *******************************************************************************/
#ifndef GEN_MyIXL_H_
#define GEN_MyIXL_H_

#include "GEN_MyIX.h"

/*! \brief Implementation of the SUBL SIFB.
 *
 */

class GEN_MyIXL : public GEN_MyIX{
    DECLARE_GENERIC_FIRMWARE_FB(GEN_MyIXL)
  public:
    GEN_MyIXL(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes);

    virtual bool configureFB(const char *pa_acConfigString);

  protected:
    static const char * const scmLocalIDPrefix;
    static const char * const scmLocalIDSuffix;

  private:
    virtual char * getDefaultIDString(const char *paID);
};

#endif /*GEN_MyIXL_H_*/
