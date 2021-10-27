/*******************************************************************************
 * Copyright (c) 2019, fortiss GmbH
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *   Jose Cabral - initial implementation
 *******************************************************************************/

#include "SubscribeEventOpcUa.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "SubscribeEventOpcUa_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_SubscribeEventOpcUa, g_nStringIdSubscribeEventOpcUa)

const TForteInt16 FORTE_SubscribeEventOpcUa::scm_anEOWithIndexes[] = {-1};
const SAdapterInstanceDef FORTE_SubscribeEventOpcUa::scm_astAdapterInstances[] = {
{g_nStringIdSubscribeEventAdp, g_nStringIdSubscribeEventAdp, false }};

const SFBInterfaceSpec FORTE_SubscribeEventOpcUa::scm_stFBInterfaceSpec = {
  0,  0,  0,  0,
  0,  0,   0, 0,  0,  0, 0, 
  0,  0, 0,
  1,scm_astAdapterInstances};


const SCFB_FBInstanceData FORTE_SubscribeEventOpcUa::scm_astInternalFBs[] = {
  {g_nStringIdInitFlagReg, g_nStringIdE_SR},
  {g_nStringIdE_PERMIT, g_nStringIdE_PERMIT},
  {g_nStringIdInitFlagUnReg, g_nStringIdE_SR},
  {g_nStringIdF_STRING_TO_WSTRING, g_nStringIdF_STRING_TO_WSTRING},
  {g_nStringIdCreateRegisterID, g_nStringIdAPPEND_STRING_3},
  {g_nStringIdANYToJSON, g_nStringIdANYToJSON},
  {g_nStringIdE_PERMIT_1, g_nStringIdE_PERMIT},
  {g_nStringIdCreateRegisterID_1, g_nStringIdAPPEND_STRING_3},
  {g_nStringIdF_STRING_TO_WSTRING_2, g_nStringIdF_STRING_TO_WSTRING},
  {g_nStringIdRegister, g_nStringIdCLIENT_1_0},
  {g_nStringIdUnregister, g_nStringIdCLIENT_1_0},
  {g_nStringIdE_DELAY_1, g_nStringIdE_DELAY},
  {g_nStringIdE_SWITCH_1_1, g_nStringIdE_SWITCH},
  {g_nStringIdE_SWITCH_2, g_nStringIdE_SWITCH},
  {g_nStringIdE_CTU_1, g_nStringIdE_CTU},
  {g_nStringIdE_DELAY_1_1, g_nStringIdE_DELAY},
  {g_nStringIdE_SWITCH_1_1_1, g_nStringIdE_SWITCH},
  {g_nStringIdE_SWITCH_2_1, g_nStringIdE_SWITCH},
  {g_nStringIdE_CTU_1_1, g_nStringIdE_CTU},
};

const SCFB_FBParameter FORTE_SubscribeEventOpcUa::scm_astParamters[] = {
  {4, g_nStringIdIN_1, "STRING#opc_ua[CALL_METHOD; "},
  {4, g_nStringIdIN_3, "STRING##; /Objects/2:EventHandler/2:subscribe]"},
  {7, g_nStringIdIN_1, "STRING#opc_ua[CALL_METHOD; "},
  {7, g_nStringIdIN_3, "STRING##; /Objects/2:EventHandler/2:unsubscribe]"},
  {11, g_nStringIdDT, "T#250ms"},
  {14, g_nStringIdPV, "UINT#3"},
  {15, g_nStringIdDT, "T#250ms"},
  {18, g_nStringIdPV, "UINT#3"},
};

const SCFB_FBConnectionData FORTE_SubscribeEventOpcUa::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCreateRegisterID, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdANYToJSON, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSubscribeEventAdp, g_nStringIdSubscribe), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCreateRegisterID, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSubscribeEventAdp, g_nStringIdUnsubscribe), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCreateRegisterID_1, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCreateRegisterID_1, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING_2, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING_2, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdANYToJSON, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInitFlagReg, g_nStringIdEO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRegister, g_nStringIdINIT), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_PERMIT, g_nStringIdEO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRegister, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRegister, g_nStringIdINITO), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_PERMIT, g_nStringIdEI), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInitFlagUnReg, g_nStringIdEO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUnregister, g_nStringIdINIT), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_PERMIT_1, g_nStringIdEO), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUnregister, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUnregister, g_nStringIdINITO), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_PERMIT_1, g_nStringIdEI), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH_2, g_nStringIdEO1), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CTU_1, g_nStringIdR), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH_1_1, g_nStringIdEO1), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CTU_1, g_nStringIdR), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CTU_1, g_nStringIdCUO), 14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH_1_1, g_nStringIdEI), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH_2, g_nStringIdEO0), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CTU_1, g_nStringIdCU), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH_1_1, g_nStringIdEO0), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_DELAY_1, g_nStringIdSTART), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH_2_1, g_nStringIdEO1), 17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CTU_1_1, g_nStringIdR), 18},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH_1_1_1, g_nStringIdEO1), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CTU_1_1, g_nStringIdR), 18},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CTU_1_1, g_nStringIdCUO), 18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH_1_1_1, g_nStringIdEI), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH_2_1, g_nStringIdEO0), 17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CTU_1_1, g_nStringIdCU), 18},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH_1_1_1, g_nStringIdEO0), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_DELAY_1_1, g_nStringIdSTART), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUnregister, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH_2, g_nStringIdEI), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_DELAY_1, g_nStringIdEO), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUnregister, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRegister, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH_2_1, g_nStringIdEI), 17},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_DELAY_1_1, g_nStringIdEO), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRegister, g_nStringIdREQ), 9},
};

const SCFB_FBFannedOutConnectionData FORTE_SubscribeEventOpcUa::scm_astFannedOutEventConnections[] = {
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInitFlagReg, g_nStringIdS), 0},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInitFlagUnReg, g_nStringIdS), 2},
  {12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSubscribeEventAdp, g_nStringIdUnsubscribed), CCompositeFB::scm_nAdapterMarker |0},
  {12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInitFlagUnReg, g_nStringIdR), 2},
  {13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInitFlagUnReg, g_nStringIdR), 2},
  {13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSubscribeEventAdp, g_nStringIdUnsubscribed), CCompositeFB::scm_nAdapterMarker |0},
  {17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSubscribeEventAdp, g_nStringIdSubscribed), CCompositeFB::scm_nAdapterMarker |0},
  {17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInitFlagReg, g_nStringIdR), 0},
  {18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInitFlagReg, g_nStringIdR), 0},
  {18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSubscribeEventAdp, g_nStringIdSubscribed), CCompositeFB::scm_nAdapterMarker |0},
};

const SCFB_FBConnectionData FORTE_SubscribeEventOpcUa::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInitFlagUnReg, g_nStringIdQ), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_PERMIT_1, g_nStringIdPERMIT), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCreateRegisterID, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdIN), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInitFlagReg, g_nStringIdQ), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_PERMIT, g_nStringIdPERMIT), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSubscribeEventAdp, g_nStringIdendpoint), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCreateRegisterID, g_nStringIdIN_2), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSubscribeEventAdp, g_nStringIdeventFilter), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdANYToJSON, g_nStringIdinput), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCreateRegisterID_1, g_nStringIdOUT), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING_2, g_nStringIdIN), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRegister, g_nStringIdID), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdANYToJSON, g_nStringIdoutput), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRegister, g_nStringIdSD_1), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING_2, g_nStringIdOUT), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUnregister, g_nStringIdID), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CTU_1, g_nStringIdQ), 14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH_1_1, g_nStringIdG), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_CTU_1_1, g_nStringIdQ), 18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH_1_1_1, g_nStringIdG), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUnregister, g_nStringIdQO), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH_2, g_nStringIdG), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRegister, g_nStringIdQO), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH_2_1, g_nStringIdG), 17},
};

const SCFB_FBFannedOutConnectionData FORTE_SubscribeEventOpcUa::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUnregister, g_nStringIdQI), 10},
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRegister, g_nStringIdQI), 9},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCreateRegisterID_1, g_nStringIdIN_2), 7},
  {7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdUnregister, g_nStringIdSD_1), 10},
};

const SCFB_FBNData FORTE_SubscribeEventOpcUa::scm_stFBNData = {
  19, scm_astInternalFBs,
  26, scm_astEventConnections,
  10, scm_astFannedOutEventConnections,
  13, scm_astDataConnections,
  4, scm_astFannedOutDataConnections,
  8, scm_astParamters
};


