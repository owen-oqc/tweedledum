/*------------------------------------------------------------------------------
| Part of Tweedledum Project.  This file is distributed under the MIT License.
| See accompanying file /LICENSE for details.
*-----------------------------------------------------------------------------*/
#pragma once

#include "../../IR/Circuit.h"

#include <nlohmann/json.hpp>

namespace tweedledum {

Circuit one_qubit_decomp(
  Circuit const& original, nlohmann::json const& config = {});

} // namespace tweedledum
