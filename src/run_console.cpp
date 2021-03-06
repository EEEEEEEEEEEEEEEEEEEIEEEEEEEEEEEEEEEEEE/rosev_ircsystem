/*
 * PROJECT:    ReactOS Deutschland e.V. IRC System
 * LICENSE:    GNU GPL v2 or any later version as published by the Free Software Foundation
 *             with the additional exemption that compiling, linking, and/or using OpenSSL is allowed
 * COPYRIGHT:  Copyright 2010 ReactOS Deutschland e.V. <deutschland@reactos.org>
 * AUTHORS:    Colin Finck <colin@reactos.org>
 */

#include <precomp.h>
#include <version.h>

int
RunInConsole()
{
    Info("*******************************************************************************\n");
    Info(PRODUCT_NAME "\n");
    Info(VERSION_COPYRIGHT "\n\n");
    Info("Running " VERSION_ID " built on " VERSION_DATE "\n");
    Info("*******************************************************************************\n\n");

    SetSignals();
    InitializeServer();
    RunServerEventLoop();

    return 0;
}
