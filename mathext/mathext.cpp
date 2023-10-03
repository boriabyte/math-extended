#include "mathext.h"
#include "auxFuncs.h"

namespace mathext {

	double add(unsigned int count, ...) {

		va_list numbers = { 0 };
		va_start(numbers, count);
		double sum = 0;

		if (!count) {
			noCount();
		}
		else {
			for (size_t index = 0; index < count; index++) {

				double number = va_arg(numbers, double);

				sum += number;
			}
		}

		va_end(numbers);

		return sum;
	}

	double sub(unsigned int count, ...) {

		va_list numbers = { 0 };
		va_start(numbers, count);
		double diff = 0;

		if (!count) {
			noCount();
		}
		else {
			for (size_t index = 0; index < count; index++) {

				double number = va_arg(numbers, double);

				if (index == 0)
					diff = number;
				else
					diff -= number;

			}

			va_end(numbers);
		}

		
		return diff;
	}

	double mul(unsigned int count, ...) {

		va_list numbers = { 0 };
		va_start(numbers, count);
		double product = 1;

		if (!count) {
			noCount();
		}
		else {

			for (size_t index = 0; index < count; index++) {

				double number = va_arg(numbers, double);

				product *= number;

			}

			va_end(numbers);
		}

		return product;
	}

	double div(unsigned int count, ...) {

		va_list numbers = { 0 };
		va_start(numbers, count);
		double quotient = 1;

		if (!count) {
			noCount();
		}
		else {

			for (size_t index = 0; index < count; index++) {

				double number = va_arg(numbers, double);
				
			}

			va_end(numbers);
			
		}

		return quotient;
		
	}
}