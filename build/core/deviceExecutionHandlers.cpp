/*******************************************************************************
 * Copyright (c) 2017 fortiss GmbH 
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *    Jose Cabral - initial implementation and rework handler infrastructure
 *******************************************************************************/

#include <timerha.h>
#include <devexec.h>

#include <sockhand.h>
#include <sysfsprocint.h>
#include <opcua_local_handler.h>
#include <opcua_remote_handler.h>


const size_t CTimerHandler::mHandlerIdentifier = 0;
const size_t CFDSelectHandler::mHandlerIdentifier = 1;
const size_t CSysFsProcessInterface::CIOHandler::mHandlerIdentifier = 2;
const size_t COPC_UA_Local_Handler::mHandlerIdentifier = 3;
const size_t COPC_UA_Remote_Handler::mHandlerIdentifier = 4;
 

void CDeviceExecution::createHandlers(CDeviceExecution& paDeviceExecution){

  paDeviceExecution.mRegisteredEventHandlers[0].mHandler = CTimerHandler::createTimerHandler(paDeviceExecution);
  paDeviceExecution.mRegisteredEventHandlers[1].mHandler = new CFDSelectHandler(paDeviceExecution);
  paDeviceExecution.mRegisteredEventHandlers[2].mHandler = new CSysFsProcessInterface::CIOHandler(paDeviceExecution);
  paDeviceExecution.mRegisteredEventHandlers[3].mHandler = new COPC_UA_Local_Handler(paDeviceExecution);
  paDeviceExecution.mRegisteredEventHandlers[4].mHandler = new COPC_UA_Remote_Handler(paDeviceExecution);

}
