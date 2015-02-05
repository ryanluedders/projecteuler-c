/*
 * Collections.hpp
 *
 *  Created on: Jan 25, 2015
 *      Author: ryanluedders
 */

#ifndef COMMON_COLLECTIONS_HPP_
#define COMMON_COLLECTIONS_HPP_

#include <list>

namespace Common {

	/**
	 * a class containing functions useful for dealing
	 * with collections (ex. lists)
	 */
	class Collections {

	public:
		/**
		 * prints a list of long integers to standard out
		 * @param l a list containing long integers
		 */
		static void printListOfLong(std::list<long> & l);

	};

}

#endif /* COMMON_COLLECTIONS_HPP_ */
