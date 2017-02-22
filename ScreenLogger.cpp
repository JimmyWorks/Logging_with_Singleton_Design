/*
 * ScreenLogger.cpp
 *
 *  Created on: Nov 10, 2016
 *      Author: Jimmy Nguyen
 */

#include <iostream>
#include "ScreenLogger.hpp"
using namespace std;

ScreenLogger::ScreenLogger()
{

}

ScreenLogger::~ScreenLogger()
{

}


void ScreenLogger::displayMessage(char const* message)
{
	cout << message;
}


