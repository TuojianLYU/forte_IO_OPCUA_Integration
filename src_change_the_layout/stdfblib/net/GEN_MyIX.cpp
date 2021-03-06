/*******************************************************************************
 * Copyright (c) 2006 - 2011 ACIN, Profactor GmbH
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *   Rene Smodic, THomas Strasser, Alois Zoitl, Gerhard Ebenhofer,
 *   Martin Melik Merkumians
 *    - initial API and implementation and/or initial documentation
 *******************************************************************************/
#include "GEN_MyIX.h"

DEFINE_GENERIC_FIRMWARE_FB(GEN_MyIX, g_nStringIdGEN_MyIX)

GEN_MyIX::GEN_MyIX(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes):
forte::com_infra::CCommFB( pa_nInstanceNameId, pa_poSrcRes, forte::com_infra::e_Subscriber){
    DEVLOG_DEBUG("!!!!!!!!!!!!!----------------GEN_MyIX.cpp create the MyIX FB in the cpp file------------------!!!!!!!!!!!!!\n");
//CNetCommFB( pa_nInstanceNameId, pa_poSrcRes, false, 0, scm_nRecvBufferSize, CCommFB::e_Subscriber){
}

