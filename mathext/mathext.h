#pragma once
#include <iostream>
#include <cstdarg>
#include <stdexcept>
#include <cassert>
#include "mathext.h"
#include "auxFuncs.h"

namespace mathext {

	double add(unsigned int count, ...);
	double sub(unsigned int count, ...);
	double mul(unsigned int count, ...);
	double div(unsigned int count, ...);
}