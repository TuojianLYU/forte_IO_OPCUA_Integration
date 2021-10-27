/*******************************************************************************
 * Copyright (c) 2006 - 2011 ACIN, Profactor GmbH
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *   Rene Smodic, Thomas Strasser, Alois Zoitl, Gerhard Ebenhofer,
 *   Ingo Hegny, Martin Melik Merkumians
 *    - initial API and implementation and/or initial documentation
 *******************************************************************************/
#include "GEN_MyIXL.h"
#include "comlayersmanager.h"

DEFINE_GENERIC_FIRMWARE_FB(GEN_MyIXL, g_nStringIdGEN_MyIXL)


const char * const GEN_MyIXL::scmLocalIDPrefix = "loc[";
const char * const GEN_MyIXL::scmLocalIDSuffix = "]";

GEN_MyIXL::GEN_MyIXL(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes):
          GEN_MyIX( pa_nInstanceNameId, pa_poSrcRes){
}

bool GEN_MyIXL::configureFB(const char *pa_acConfigString){
  bool bRetVal = GEN_MyIX::configureFB(pa_acConfigString);
  //subls normally don't show the QI in the tool
  QI() = true;
  return bRetVal;
}

char * GEN_MyIXL::getDefaultIDString(const char *paID){
  return buildIDString(scmLocalIDPrefix, paID, scmLocalIDSuffix);
}

