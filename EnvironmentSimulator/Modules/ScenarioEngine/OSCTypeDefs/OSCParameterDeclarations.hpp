/*
 * esmini - Environment Simulator Minimalistic
 * https://github.com/esmini/esmini
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/.
 *
 * Copyright (c) partners of Simulation Scenarios
 * https://sites.google.com/view/simulationscenarios
 */

#pragma once

#include <iostream>
#include <string>

#include <iostream>
#include <string>
#include <vector>

#include "CommonMini.hpp"

namespace scenarioengine
{
	class OSCParameterDeclarations
	{
	public:
		enum class ParameterType {
			PARAM_TYPE_INTEGER,
			PARAM_TYPE_DOUBLE,
			PARAM_TYPE_STRING,
			PARAM_TYPE_BOOL
		};

		struct ParameterStruct
		{
			std::string name;
			ParameterType type;
			struct value
			{
				int _int = 0;
				double _double = 0;
				std::string _string;
				bool _bool = false;
			} value;
		};

		std::vector<ParameterStruct> Parameter;

		void* getValueFromStruct(ParameterStruct *p)
		{
			return (void*)&p->value._int;
		}

		void* setValueInStruct(ParameterStruct* p)
		{
			return (void*)&p->value._int;
		}
	};

}