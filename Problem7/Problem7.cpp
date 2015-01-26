/*
 * Problem6.cpp
 *
 *  Created on: Jan 25, 2015
 *      Author: ryanluedders
 */

#include "Problem7.hpp"

#include <cmath>

#include "Collections.hpp"
#include "Numbers.hpp"

long Problem7::findNthPrime(long n) {
	int count = 0;
	int idx = 1;
	while (count < n) {
		idx += 1;
		if (Numbers::isPrime(idx)) {
			count += 1;
		}
	}
	return idx;
}


