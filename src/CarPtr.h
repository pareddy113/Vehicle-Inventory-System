/*
 * CarPtr.h
 *
 *  Created on: Apr 7, 2017
 *      Author: Avinash
 */

#ifndef SRC_CARPTR_H_
#define SRC_CARPTR_H_
#include "Car.h"
#include "FileHandle.h"
using namespace std;
class CarPtr{
public:
	CarPtr();
	~CarPtr();
	CarPtr(int i);
	Car* cCar;
	Car* cCar1=new Car();
	Car* operator->();
	Car& operator*();
	void createInstance(int i);
	void readInstance(int i);
	void editInstance(int i);
	void editPriceInstance(int i,float newPrice);
	void saveInstance(int i);
	int id;
};




#endif /* SRC_CARPTR_H_ */
