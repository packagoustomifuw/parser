/***
 Author: Pierce Simpson
 NetID: simpspr
 Assignment #: 3
 File: main.cpp
 */

// standard includes are different in C++




/***********************************************************************/
// Includes for classes needed to launch the main algorithms
#include "parser.h"
 
#include <iostream>

/*
 Reads in the file and starts the parsing process
 */
int main( int argc, char **argv )
{
	VehicleJourney* journey = new VehicleJourney();
	std::vector<GPSIMUState*> GPSvector;
	int i = 0;
	
	// printing out to the stderr if something goes wrong
	if (argc != 1) {
		std::cerr << "Usage: " << argv[0] << " outputFile" << std::endl;
		return -1;
	}
	else{
		ifstream
	/**
	The rest of the main file is up to you...check the suggested
	return values of functions to see how they return failure or not.
	*/ 
	journey->setStates(NMEAParser::parseLogFile(argv[1]));
	std::cout << (journey->getStates()).size() << std::endl;
	journey->analyzeJourney(journey->getStates());
	//GPSvector = NMEAParser::parseLogFile(argv[1]);
//	std::cout << GPSvector.size() << std::endl;
//		for(i;i<GPSvector.size();i++){
//			std::cout << GPSvector.at(i.getSeconds()) << std::endl;


	return 0;
}
