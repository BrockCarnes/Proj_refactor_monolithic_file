/*
 * fileio.h
 * Created on: Sep 24, 2020
 * Author: Brockton Carnes
 */

#ifndef FILEIO_FILEIO_H
#define FILEIO_FILEIO_H
#include <string>
#include <vector>
#include "../includes/constants.h"

int loadData(const std::string filename, std::vector<process> &myProcesses);
int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif
 