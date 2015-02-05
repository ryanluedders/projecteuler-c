/*
 * Problem4.hpp
 *
 *  Created on: Jan 23, 2015
 *      Author: ryanluedders
 *
 *  A palindromic number reads the same both ways.
 *  The largest palindrome made from the product of two
 *  2-digit numbers is 9009 = 91 x 99.
 *
 *  Find the largest palindrome made from the product of
 *  two 3-digit numbers.
 */

#ifndef PROBLEM4_PROBLEM4_HPP_
#define PROBLEM4_PROBLEM4_HPP_

namespace Problem {

	class Problem4 {

	public:
		/**
		 * find the largest palindrome that is made from
		 * the product of two n-digit numbers
		 * @param digits the number of digits in the numbers
		 * @return the largest product that is a palindrome
		 */
		static long findLargestPalendromicProduct(int digits);
	};

}

#endif /* PROBLEM4_PROBLEM4_HPP_ */
