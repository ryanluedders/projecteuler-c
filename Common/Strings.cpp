/*
 * Strings.cpp
 *
 *  Created on: Jan 24, 2015
 *      Author: ryanluedders
 */

#include <cmath>
#include <iostream>

#include "Strings.hpp"

using namespace Common;

bool Strings::isPalindrome(std::string s) {
	// get the first and second halves of the string
	// 1111X2222
	int halfLength = floor(s.length() / 2.0);
	int secondStart = ceil(s.length() / 2.0);

	std::string firstHalf = s.substr(0, halfLength);
	std::string secondHalf = s.substr(secondStart, halfLength);

	// reverse iterate to make a reverse copy of the
	// second half
	std::string secondHalfReverse = std::string();
	for (std::string::reverse_iterator i = secondHalf.rbegin();
			i != secondHalf.rend();
			++i
			)
	{
		secondHalfReverse += *i;
	}

	// compare the first and reversed second half
	// if equal, then it's a palindrome
	if (firstHalf.compare(secondHalfReverse) == 0) {
		return true;
	}

	return false;
}

int Strings::toInt(std::string s) {
	return stoi(s);
}

int Strings::toInt(char c) {
	return atoi(&c);
}


