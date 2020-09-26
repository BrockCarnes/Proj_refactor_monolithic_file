/*
 * fileio.cpp
 *
 *  Created on: Sep 22, 2020
 *      Author: Brockton Carnes
 */
#include <iostream>
#include <fstream>
#include "../includes/fileio.h"

using namespace std;

//attempt to open file 'filename' and read in all data
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int loadData(const std::string filename, vector<process> &myProcesses){
	return SUCCESS;
}

//attempt to create or open file 'filename' to write all data to
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int saveData(const std::string filename, vector<process> &myProcesses){
	return UNIMPLEMENTED;
}