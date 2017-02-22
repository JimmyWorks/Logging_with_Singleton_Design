/*
 * FileLogger.hpp
 *
 *  Created on: Nov 10, 2016
 *      Author: Jimmy Nguyen
 */


#ifndef FILELOGGER_HPP_
#define FILELOGGER_HPP_

#include "CS1337Logger.hpp"
#include <fstream>
#include <iostream>

using namespace std;



class FileLogger : public CS1337Logger
{
	private:
		ofstream outfile;
	public:
		FileLogger();
		~FileLogger();
		void displayMessage(char const*);
};



#endif /* FILELOGGER_HPP_ */
