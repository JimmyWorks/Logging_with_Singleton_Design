/*
 * ScreenLogger.hpp
 *
 *  Created on: Nov 10, 2016
 *      Author: Jimmy Nguyen
 */

#ifndef SCREENLOGGER_HPP_
#define SCREENLOGGER_HPP_

#include "CS1337Logger.hpp"

class ScreenLogger : public CS1337Logger
{
	private:

	public:
	ScreenLogger();
	~ScreenLogger();
	void displayMessage(char const*);
};



#endif /* SCREENLOGGER_HPP_ */
