/*******************************************************************************
 * Copyright (c) 2018, fortiss GmbH
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *   Jose Cabral - initial implementation
 *******************************************************************************/

#include "QueryServiceHTTP.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "QueryServiceHTTP_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_QueryServiceHTTP, g_nStringIdQueryServiceHTTP)

const TForteInt16 FORTE_QueryServiceHTTP::scm_anEOWithIndexes[] = {-1};
const SAdapterInstanceDef FORTE_QueryServiceHTTP::scm_astAdapterInstances[] = {
{g_nStringIdQueryServicesAdp, g_nStringIdqueryServices, false }};

const SFBInterfaceSpec FORTE_QueryServiceHTTP::scm_stFBInterfaceSpec = {
  0,  0,  0,  0,
  0,  0,   0, 0,  0,  0, 0, 
  0,  0, 0,
  1,scm_astAdapterInstances};


const SCFB_FBInstanceData FORTE_QueryServiceHTTP::scm_astInternalFBs[] = {
  {g_nStringIdAPPEND_STRING_3, g_nStringIdAPPEND_STRING_3},
  {g_nStringIdQuery, g_nStringIdCLIENT_1_2},
  {g_nStringIdF_STRING_TO_WSTRING, g_nStringIdF_STRING_TO_WSTRING},
  {g_nStringIdInitFlag, g_nStringIdE_SR},
  {g_nStringIdE_PERMIT, g_nStringIdE_PERMIT},
  {g_nStringIdANYToJSON, g_nStringIdANYToJSON},
  {g_nStringIdGetHTTPResult, g_nStringIdGetArrayResponseFromJSON},
};

const SCFB_FBParameter FORTE_QueryServiceHTTP::scm_astParamters[] = {
  {0, g_nStringIdIN_1, "STRING#http["},
  {0, g_nStringIdIN_3, "STRING#/query; PUT; application/json]"},
};

const SCFB_FBConnectionData FORTE_QueryServiceHTTP::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInitFlag, g_nStringIdS), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInitFlag, g_nStringIdEO), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQuery, g_nStringIdINIT), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQuery, g_nStringIdINITO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_PERMIT, g_nStringIdEI), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_PERMIT, g_nStringIdEO), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQuery, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQuery, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInitFlag, g_nStringIdR), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdANYToJSON, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdqueryServices, g_nStringIdquery), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdANYToJSON, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdGetHTTPResult, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdqueryServices, g_nStringIdqueried), CCompositeFB::scm_nAdapterMarker |0},
};

const SCFB_FBFannedOutConnectionData FORTE_QueryServiceHTTP::scm_astFannedOutEventConnections[] = {
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdGetHTTPResult, g_nStringIdREQ), 6},
};

const SCFB_FBConnectionData FORTE_QueryServiceHTTP::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdIN), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQuery, g_nStringIdID), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInitFlag, g_nStringIdQ), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_PERMIT, g_nStringIdPERMIT), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdANYToJSON, g_nStringIdoutput), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQuery, g_nStringIdSD_1), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdqueryServices, g_nStringIdserviceQueryForm), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdANYToJSON, g_nStringIdinput), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdqueryServices, g_nStringIdendpoint), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAPPEND_STRING_3, g_nStringIdIN_2), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQuery, g_nStringIdRD_2), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdGetHTTPResult, g_nStringIdresponse), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdGetHTTPResult, g_nStringIdoutput), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdqueryServices, g_nStringIdserviceEntries), CCompositeFB::scm_nAdapterMarker |0},
};

const SCFB_FBFannedOutConnectionData FORTE_QueryServiceHTTP::scm_astFannedOutDataConnections[] = {
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdQuery, g_nStringIdQI), 1},
};

const SCFB_FBNData FORTE_QueryServiceHTTP::scm_stFBNData = {
  7, scm_astInternalFBs,
  9, scm_astEventConnections,
  1, scm_astFannedOutEventConnections,
  8, scm_astDataConnections,
  1, scm_astFannedOutDataConnections,
  2, scm_astParamters
};


