/*
 * Strings.hpp
 *
 *  Created on: Jan 24, 2015
 *      Author: ryanluedders
 */

#ifndef COMMON_STRINGS_HPP_
#define COMMON_STRINGS_HPP_

#include <string>

namespace Common {

	class Strings {
	public:
		static bool isPalindrome(std::string s);
		static int toInt(std::string s);
		static int toInt(char c);
	};

}

#endif /* COMMON_STRINGS_HPP_ */
