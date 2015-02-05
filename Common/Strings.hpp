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

	/**
	 * class containing functions useful for dealing
	 * with strings and string problems
	 */
	class Strings {

	public:
		/**
		 * check if a string reads the same forwards
		 * as it does backwards
		 * @param s the string to check
		 * @return true if the string a palindrome
		 * 		false otherwise
		 */
		static bool isPalindrome(std::string s);

		/**
		 * convert a string to an integer
		 * @param s the string to convert
		 * @return the converted value
		 */
		static int toInt(std::string s);

		/**
		 * convert a character to an integer
		 * @param c the character to convert
		 * @return the converted value
		 */
		static int toInt(char c);
	};

}

#endif /* COMMON_STRINGS_HPP_ */
