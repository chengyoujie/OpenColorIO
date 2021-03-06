// SPDX-License-Identifier: BSD-3-Clause
// Copyright Contributors to the OpenColorIO Project.


#ifndef INCLUDED_OCIO_GAMMAOP_CPU_H
#define INCLUDED_OCIO_GAMMAOP_CPU_H


#include <OpenColorIO/OpenColorIO.h>

#include "Op.h"
#include "ops/Gamma/GammaOpData.h"

OCIO_NAMESPACE_ENTER
{
      
// Get the Gamma dedicated renderer.
ConstOpCPURcPtr GetGammaRenderer(ConstGammaOpDataRcPtr & gamma);

}
OCIO_NAMESPACE_EXIT


#endif