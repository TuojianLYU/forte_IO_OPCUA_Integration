/*******************************************************************************
 * Copyright (c) 2018 TU Wien/ACIN
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *    Martin Melik Merkumians
 *      - initial implementation and rework communication infrastructure
 *******************************************************************************/

#ifndef SRC_CORE_SIMPLEFB_H_
#define SRC_CORE_SIMPLEFB_H_

#include "basicfb.h"

class CSimpleFB : public CBasicFB{
  public:
    CSimpleFB(CResource *paSrcRes,
        const SFBInterfaceSpec *paInterfaceSpec,
        const CStringDictionary::TStringId paInstanceNameId,
        const SInternalVarsInformation *paVarInternals,
        TForteByte *paFBConnData,
        TForteByte *paBasicFBVarsData);
    virtual ~CSimpleFB();

    virtual void executeEvent(int paEIID);
    virtual void alg_REQ(void) = 0;
};

#endif /* SRC_CORE_SIMPLEFB_H_ */
