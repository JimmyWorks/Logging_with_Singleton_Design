/*
 * CS1337Logger.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: Jimmy Nguyen
 */

#include "CS1337Logger.hpp"
#include "LogSingleton.hpp"

CS1337Logger::CS1337Logger()
{
// This had previously held a private member variable "loggingEnabled"
// but this was moved to the LogSingleton class where it is held in
// the Singleton Factory as a private static member variable allowing
// the enabling and disabling of logging to be changed regardless of
// the current instance name and whether or not an instance currently exists
}

CS1337Logger::~CS1337Logger()
{

}

void CS1337Logger::logMessage(char const* x)
{
	if(LogSingleton::logStatus())
		displayMessage(x);
}


