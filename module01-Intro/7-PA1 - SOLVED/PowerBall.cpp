#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include "ObjectCounter.h"

/**
 * Program to analyze the frequency of each number in PowerBall lottery
 * drawings.
 *
 * TODO: complete Doxygen tags for the main program.
 * @author Mark M. Meysenburg
 * @date 10-5-2021
 */
int main() {
	// allocate counting object, for PowerBall numbers in [1, 59]
    ObjectCounter oc(59);
	
	// open input file
	std::ifstream inFile;
	inFile.open("numbers.txt");
	
	// read numbers, one line at a time
	int b1, b2, b3, b4, b5, b6;
	while( inFile >> b1 ) {
		inFile >> b2;
		inFile >> b3;
		inFile >> b4;
		inFile >> b5;
		inFile >> b6;

		// TODO: replace this output code with your code to count
		// the frequency of each number. Use the ObjectCounter object
		// std::cout << "placeholder outout -- replace with counting!" << 
    	//     std::endl;
		oc.increment(b1);
		oc.increment(b2);
		oc.increment(b3);
		oc.increment(b4);
		oc.increment(b5);
		oc.increment(b6);
	}

	inFile.close();

	// TODO: output the frequency for each number, as described in the
	// assignment. Use the ObjectCounter object
	// std::cout << "placeholder outout -- replace with output of counts!" << 
    //     std::endl;
	for(size_t i = 1; i <= 59; i++) {
		std::cout << i << "\t" << oc.getCount(i) << std::endl;
	}

	return EXIT_SUCCESS;
}
