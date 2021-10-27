/*******************************************************************************
 * Copyright (c) 2006 - 2011 ACIN, Profactor GmbH
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *   Rene Smodic, Alois Zoitl, Gerhard Ebenhofer, Martin Melik Merkumians
 *    - initial API and implementation and/or initial documentation
 *******************************************************************************/
#ifndef _GEN_MyIX_H_
#define _GEN_MyIX_H_

#include "../../core/cominfra/commfb.h"

/*! \brief Implementation of the MyIXR SIFB.
 */


class GEN_MyIX : public forte::com_infra::CCommFB {
    DECLARE_GENERIC_FIRMWARE_FB(GEN_MyIX)

  public:
    GEN_MyIX(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes);
    virtual ~GEN_MyIX(){};

};

#endif //_GEN_MyIX_H_

