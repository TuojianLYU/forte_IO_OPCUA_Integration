/*******************************************************************************
 * Copyright (c) 2012 AIT
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *   Filip Andren - initial API and implementation and/or initial documentation
 *******************************************************************************/
#ifndef CMDADDCONNECTION_H_
#define CMDADDCONNECTION_H_
#include "ICmd.h"

class COpcConnectionImpl;

class CCmd_AddConnection : public ICmd{
  public:
    explicit CCmd_AddConnection(COpcConnectionImpl *pa_pConnection);
    virtual ~CCmd_AddConnection();

    virtual void runCommand();
    virtual const char* getCommandName() const;
  private:
    COpcConnectionImpl* m_pConnection;
};

#endif // CMDADDCONNECTION_H_
