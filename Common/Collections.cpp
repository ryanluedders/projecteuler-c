/*
 * Collections.cpp
 *
 *  Created on: Jan 25, 2015
 *      Author: ryanluedders
 */

#include <iostream>

#include "Collections.hpp"

void Collections::printListOfLong(std::list<long> l) {
	std::list<long>::iterator it;
	std::cout << "[";
	for (it = l.begin(); it != l.end(); ++it) {
		std::cout << (*it);
		if (it == --l.end()) {
			std::cout << "]" << std::endl;
		} else {
			std::cout << ", ";
		}
	}
}


