/*
 * FileLogger.cpp
 *
 *  Created on: Nov 10, 2016
 *      Author: Jimmy Nguyen
 */

#include <iostream>
#include <fstream>
#include "FileLogger.hpp"
using namespace std;

FileLogger::FileLogger()
{
	outfile.open("log.txt");
}

FileLogger::~FileLogger()
{
	outfile.close();
}

void FileLogger::displayMessage(char const* message)
{
	cout << message;
	cout.flush();
	outfile << message;
	outfile.flush();

}

