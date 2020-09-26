/*
 * utils.h
 *
 *  Created on: Sep 24, 2020
 *      Author: Brockton
 */
#ifndef INCLUDES_USR_UTILS_H_
#define INCLUDES_USR_UTILS_H_
#include <iostream>
#include <string>
#include <vector>
#include "../includes/constants.h"


void sortData(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses);
process getNext(std::vector<process> &myProcesses);
int getSize(std::vector<process> &myProcesses);
int handleMissingData(std::vector<process> &myProcesses);

#endif