/*
 * CS1337Logger.hpp
 *
 *  Created on: Nov 9, 2016
 *      Author: Jimmy Nguyen
 */

#ifndef CS1337LOGGER_HPP_
#define CS1337LOGGER_HPP_

class CS1337Logger
{
	private:
	virtual void displayMessage(char const*) = 0;

// This class had previously held a private member variable "loggingEnabled"
// but this was moved to the LogSingleton class where it is held in
// the Singleton Factory as a private static member variable allowing
// the enabling and disabling of logging to be changed regardless of
// the current instance name and whether or not an instance currently exists.

	public:
		CS1337Logger();
		virtual ~CS1337Logger();
		void logMessage(char const*);

};



#endif /* CS1337LOGGER_HPP_ */
