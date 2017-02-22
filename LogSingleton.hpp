/*
 * LogSingleton.hpp
 *
 *  Created on: Nov 9, 2016
 *      Author: Jimmy Nguyen
 */

#ifndef LOGSINGLETON_HPP_
#define LOGSINGLETON_HPP_

#include "CS1337Logger.hpp"
#include "ScreenLogger.hpp"
#include "FileLogger.hpp"

enum LoggerTypes
{
	SCREENLOGGER,
	FILELOGGER
};

class LogSingleton
{
	private:
		static CS1337Logger* theInstance;  // the one and ONLY instance
		static int instanceCount;	// Counter to show that its working
		static bool loggingEnabled; //Switch to enable or disable logging

		LogSingleton();

	public:
		static CS1337Logger* getLogger(int=0);
		static int getInstanceCount();
		static void loggerOFF();
		static void loggerON();
		static bool logStatus();
		static void deleteLogger();

};

////Create space for the static variables
//CS1337Logger* LogSingleton::theInstance = NULL;
//int LogSingleton::instanceCount = 0;

#endif /* LOGSINGLETON_HPP_ */
