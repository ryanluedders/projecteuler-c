/*
 * Problem9.cpp
 *
 *  Created on: Jan 25, 2015
 *      Author: ryanluedders
 *
 *  A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 *
 *  a2 + b2 = c2
 *  For example, 32 + 42 = 9 + 16 = 25 = 52.
 *
 *  There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 *  Find the product abc.
 *
 */

#include "Problem9.hpp"

#include <cmath>
#include <iostream>

#include "Collections.hpp"
#include "Numbers.hpp"
#include "Strings.hpp"

using namespace Common;
using namespace Problem;

// a2 + b2 = c2
// a + b + c = 1000

Problem9::Result Problem9::findPythagoreanTripleWithSum(long n) {
	for(long a = 2; a <= n; ++a) {
		for (long b = 2; a + b <= n; ++b) {
			for (long c = min(a,b); a + b + c <= n; ++c) {
				if ((a + b + c == n) && (pow(a,2.0) + pow(b, 2.0) == pow(c, 2.0))) {
					Result result;
					result.a = a;
					result.b = b;
					result.c = c;
					return result;
				}
			}
		}
	}
	return Result();
}




