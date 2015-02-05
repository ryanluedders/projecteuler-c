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
	private:

	public:
		struct Result {
			int a;
			int b;
			int c;
		};

		static Result findPythagoreanTripleWithSum(long n);

	};

}

#endif /* PROBLEM9_PROBLEM9_HPP_ */
