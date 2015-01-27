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

	class Numbers{
	private:
		static log4cxx::LoggerPtr logger;

	public:
		static bool isFactorOf(long f, long n);
		static bool isPrime(long n);
		static bool isPalindrome(long n);
	};

}

#endif /* COMMON_NUMBERS_HPP_ */
