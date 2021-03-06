#include "Problem1.hpp"

using namespace Problem;

int Problem1::getSumOfMultiplesBelow(int below) {
	int sum = 0;
	for (int i = 0; i < below; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	return sum;
}
