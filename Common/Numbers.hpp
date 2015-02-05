/*
 * Numbers.hpp
 *
 *  Created on: Jan 24, 2015
 *      Author: ryanluedders
 */

#ifndef COMMON_NUMBERS_HPP_
#define COMMON_NUMBERS_HPP_

#include "log4cxx/logger.h"

namespace Common {

	/**
	 * class containing functions useful for dealing with
	 * numbers and number problems
	 */
	class Numbers{

	private:
		/** a logger for the Numbers class */
		static log4cxx::LoggerPtr logger;

	public:
		/**
		 * check if one number is a factor of another
		 * @param f number in question as a factor
		 * @param n number f may be a factor of
		 * @return true if f is a factor of n, false otherwise
		 */
		static bool isFactorOf(long f, long n);

		/**
		 * check if a number is prime
		 * @param n the number to check
		 * @return true if n is a prime, false otherwise
		 */
		static bool isPrime(long n);

		/**
		 * check if a number reads the same forward as it
		 * does backwards
		 * @param n the number to check
		 * @return true if the number is a palindrome, false otherwise
		 */
		static bool isPalindrome(long n);
	};

}

#endif /* COMMON_NUMBERS_HPP_ */
