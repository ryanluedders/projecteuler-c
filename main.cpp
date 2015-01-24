#include <iostream>

#include "Problem1/Problem1.hpp"
#include "Problem2/Problem2.hpp"
#include "Problem3/Problem3.hpp"
#include "Problem4/Problem4.hpp"

static const int CURRENT_PROBLEM = 4;

int main(int argc, char **argv) {
	if (CURRENT_PROBLEM == 1) {
		// problem 1
		std::cout << Problem1::getSumOfMultiplesBelow(10) << std::endl;
		std::cout << Problem1::getSumOfMultiplesBelow(1000) << std::endl;
	} else if (CURRENT_PROBLEM == 2) {
		// problem 2
		std::cout << Problem2::findSumOfEvenFibonacciNumbersBelow(100) << std::endl;
		std::cout << Problem2::findSumOfEvenFibonacciNumbersBelow(4000000) << std::endl;
	} else if (CURRENT_PROBLEM == 3) {
		// problem 3
		std::cout << Problem3::findLargestPrime(13195) << std::endl;
		std::cout << Problem3::findLargestPrime(600851475143) << std::endl;
	} else if (CURRENT_PROBLEM == 4) {
		// problem 4
		std::cout << Problem4::findLargestPalendromicProduct(2) << std::endl;
		std::cout << Problem4::findLargestPalendromicProduct(3) << std::endl;
	}
}
