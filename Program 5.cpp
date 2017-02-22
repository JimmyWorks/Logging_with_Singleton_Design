//============================================================================
// Name        : Program.cpp
// Author      : Thanh Hoang Nguyen
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cstdlib>
#include "LogSingleton.hpp"
using namespace std;


void someFunction();


int main()
{

	cout << "Welcome to Jimmy's Demo of the Singleton Logger!\n\n"

		 << "In this implementation, I will demonstrate how this program\n"
		 << "can be included to allow the user to create a single instance\n"
		 << "of a logging object which will either print to the screen or\n"
		 << "print to both the screen and a file, \"log.txt\".  This logging\n"
		 << "object will only have one instance which can be called from any\n"
		 << "function, nested function, or .cpp file.  The singleton logging\n"
		 << "object also be deleted and a single instance can be recreated.\n\n";

	CS1337Logger* myDebugger;
	myDebugger = LogSingleton::getLogger(SCREENLOGGER);

	cout << "Normally, I would have to manually create a cout message to debug." << endl
		 <<"Ex: DEBUG The value of x is 5." << endl
		 <<"However, let's create a Singleton Screen Logger from the Singleton Logger Factory Design." << endl << endl;

	LogSingleton::loggerON(); //Enable logging
	myDebugger->logMessage("LOGGED: This is a message printed to the screen from the Singleton Logger.\n\n");
	myDebugger->logMessage("LOGGED: The current instance count is: ");
	char buffer [2];
	myDebugger->logMessage(itoa(LogSingleton::getInstanceCount(), buffer, 10));
	myDebugger->logMessage("\n\n");

	cout << "Entering some function..." << endl << endl;
	someFunction();

	cout << "Now, let's try deleting the current Screen Logger and create a File Logger." << endl << endl;
	LogSingleton::deleteLogger();
	cout << "Now the singleton logger is deleted and the singleton pointer is reset to NULL.\n"
		 << "Let's create a new logger.  This time we will make a File Logger." << endl << endl;

	CS1337Logger* myFileLogger = LogSingleton::getLogger(FILELOGGER);
	cout << "Because the deletion resets the logging status, Logging Enabled is now set to false.\nValue of loggingEnabled: "
		 << LogSingleton::logStatus() << endl << endl;

	cout << "Let's turn the logging function ON and begin sending some text to the screen AND the logging.txt file." << endl;
	LogSingleton::loggerON();
	myFileLogger->logMessage("FILE LOG: Hi, my name is Jimmy Nguyen and I enjoy programming and dancing.\n");
	myFileLogger->logMessage("FILE LOG: If you're looking for a talented team player with character and charisma, contact me.\n");
	myFileLogger->logMessage("FILE LOG: I would love to hear more about your company and your team! <end shameless plug>\n\n");

	cout << "End of logging demo.  Deleting current instance of Log Singleton." << endl << endl;
	LogSingleton::deleteLogger();

	cout << "Thank you for viewing Jimmy's Singleton Logger Demo.\n"
		 << "All code written within this program was written by Jimmy Nguyen.\n\n"
		 << "For all questions, contact me at Jimmy@JimmyWorks.net" << endl;



	return 0;
}

void someFunction()
{
	CS1337Logger* myLog = LogSingleton::getLogger();



	myLog->logMessage("LOGGED: Logging from inside 'SomeFunction'\nLOGGED: Instance count is still: ");
	char buffer [2];
	myLog->logMessage(itoa(LogSingleton::getInstanceCount(), buffer, 10));
	myLog->logMessage("\n\n");
	cout << "Leaving some function..." << endl;


	return;
}




