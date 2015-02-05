/*
 * Collections.cpp
 *
 *  Created on: Jan 25, 2015
 *      Author: ryanluedders
 */

#include <iostream>
#include <string>

#include "Collections.hpp"

using namespace Common;
using namespace std;

/** character used to indicate the start of a list */
const static string OPEN_LIST = "[";

/** character used to indicate the end of a list */
const static string CLOSE_LIST = "]";

/** character used to separate items in a list */
const static string SEPERATOR = ", ";

void Collections::printListOfLong(std::list<long> & l) {
	std::list<long>::iterator it;
	std::cout << OPEN_LIST;
	for (it = l.begin(); it != l.end(); ++it) {
		std::cout << (*it);
		if (it == --l.end()) {
			std::cout << CLOSE_LIST << std::endl;
		} else {
			std::cout << SEPERATOR;
		}
	}
}


