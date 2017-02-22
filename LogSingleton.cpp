/*
 * LogSingleton.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: Jimmy Nguyen
 */

#include <iostream>
#include "LogSingleton.hpp"
using namespace std;


//Create space for the static variables
CS1337Logger* LogSingleton::theInstance = NULL;
int LogSingleton::instanceCount = 0;
bool LogSingleton::loggingEnabled = false;

LogSingleton::LogSingleton()
{

}

CS1337Logger* LogSingleton::getLogger(int logType)
{
	if(LogSingleton::theInstance == NULL)
	{
		cout << "Creating new logger..." << endl << endl;
		switch(logType)
		{
			case SCREENLOGGER:
				LogSingleton::theInstance = new ScreenLogger();
				break;
			case FILELOGGER:
				LogSingleton::theInstance = new FileLogger();
				break;
			default:
				break;
		}
		++LogSingleton::instanceCount;
	}

	return LogSingleton::theInstance;
}

void LogSingleton::deleteLogger()
{
	delete LogSingleton::theInstance;
	LogSingleton::theInstance = NULL;
	LogSingleton::instanceCount = 0;
	LogSingleton::loggerOFF();
	cout << "Logger deleted!" << endl
		 << "Instance pointer reset to NULL" << endl
		 << "Instance count reset to 0" << endl
		 << "logger status reset to OFF" << endl << endl;
}

int LogSingleton::getInstanceCount()
{
	return LogSingleton::instanceCount;
}

void LogSingleton::loggerOFF()
{
	LogSingleton::loggingEnabled = false;
}

void LogSingleton::loggerON()
{
	LogSingleton::loggingEnabled = true;
}

bool LogSingleton::logStatus()
{
	return LogSingleton::loggingEnabled;
}
