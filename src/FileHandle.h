/*
 * FileHandle.h
 *
 *  Created on: Apr 8, 2017
 *      Author: Avinash
 */

#ifndef SRC_FILEHANDLE_H_
#define SRC_FILEHANDLE_H_
#include <iostream>
#include <fstream>
#include "String.h"
#include "Car.h"
#include "CarPtr.h"
#include "Date.h"
#include <string>

class FileHandle{
public:
	Car* readFile(int id,Car& car);
	void writeFile(int id,Car& car);
};


#endif /* SRC_FILEHANDLE_H_ */
