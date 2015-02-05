/*
 * Problem9.hpp
 *
 *  Created on: Jan 25, 2015
 *      Author: ryanluedders
 */

#ifndef PROBLEM9_PROBLEM9_HPP_
#define PROBLEM9_PROBLEM9_HPP_

#include <string>

using namespace std;

namespace Problem {

	class Problem9 {
	public:
		/**
		 * struct used to return the result of the problem
		 */
		struct Result {
			int a;
			int b;
			int c;
		};

		/**
		 * finds a pythagorean triple with sum n
		 * pythagorean triple is where a^2 + b^2 = c^2
		 * @param n the desired sum
		 * @return the pythagorean triple
		 */
		static Result findPythagoreanTripleWithSum(long n);

	};

}

#endif /* PROBLEM9_PROBLEM9_HPP_ */
