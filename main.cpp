#include <iostream>

#include "Problem1/Problem1.hpp"
#include "Problem2/Problem2.hpp"

int main(int argc, char **argv) {
	// problem 1
	std::cout << Problem1::getSumOfMultiplesBelow(10) << std::endl;
	std::cout << Problem1::getSumOfMultiplesBelow(1000) << std::endl;

	// problem 2
	std::cout << Problem2::findSumOfEvenFibonacciNumbersBelow(100) << std::endl;
	std::cout << Problem2::findSumOfEvenFibonacciNumbersBelow(4000000) << std::endl;
}
