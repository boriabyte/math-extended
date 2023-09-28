#include <iostream>
#include <cstdarg>
#include <stdexcept>
#include <cassert>
#include "mathext.h"

namespace mathext {

	long long add(unsigned int count, ...) {

		va_list numbers = { 0 };
		va_start(numbers, count);
		long long sum = 0;

		for (int index = 0; index < count; index++) {

			long long number = va_arg(numbers, long long);

			sum += number;
		}

		va_end(numbers);

		return sum;
	}

	long long sub(unsigned int count, ...) {

		va_list numbers = { 0 };
		va_start(numbers, count);
		long long diff = 0;

		for (int index = 0; index < count; index++) {

			long long number = va_arg(numbers, long long);

			if (index == 0)
				diff = number;
			else
				diff -= number;
		}

		va_end(numbers);

		return diff;
	}

	long long mul(unsigned int count, ...) {

		va_list numbers = { 0 };
		va_start(numbers, count);
		long long product = 1;

		if (!count) {

			

		}
		else {

			for (int index = 0; index < count; index++) {

				long long number = va_arg(numbers, long long);

				product *= number;

			}

			va_end(numbers);
			return product;
		}

	}

	long long div(unsigned int count, ...) {

		va_list numbers = { 0 };
		va_start(numbers, count);
		long long quotient = 1;

		if (!count)
			quotient = 0;
		else {

			for (int index = 0; index < count; index++) {

				long long number = va_arg(numbers, long long);
				

			}
		}

		return quotient;
	}
}