/*
 * Numbers.cpp
 *
 *  Created on: Jan 24, 2015
 *      Author: ryanluedders
 */

#include <string>
#include <cmath>
#include <cstdlib>
#include <iostream>

#include "log4cxx/logger.h"

#include "Constants.hpp"
#include "Numbers.hpp"
#include "Strings.hpp"

using namespace Common;

log4cxx::LoggerPtr Numbers::logger(
		log4cxx::Logger::getLogger(Constants::PROJECT_NAME));

bool Numbers::isFactorOf(long f, long n) {
	if (n % f == 0) {
		return true;
	}
	return false;
}

bool Numbers::isPrime(long n) {
	for(long i=2; i<=std::sqrt(n); ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

bool Numbers::isPalindrome(long n) {
	std::string nstr = std::to_string(n);

	LOG4CXX_INFO(logger,
			std::string("converted number to string: ") + nstr);

	return Strings::isPalindrome(nstr);
}


