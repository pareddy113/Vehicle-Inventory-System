/*
 * Car.h
 *
 *  Created on: Apr 7, 2017
 *      Author: Avinash
 */

#ifndef SRC_CAR_H_
#define SRC_CAR_H_
#include <iostream>
#include <fstream>
#include "String.h"
#include "Date.h"
class Car{

public:
	Car();
	Car(int id);
	Car(string make, string model, int year, Date date,float cost,string picture);
	friend istream &operator >> (istream &input, Car &C );
	friend ostream &operator << (ostream &output,const Car &C );

private:
	int id_;
	string make_;
	string model_;
	int year_;
	Date date_;
	float cost_;
	string picture_;

public:
	int id();
	string& make();
	string& model();
	int year();
	Date& date();
	string& picture();
	float cost();
	void id(int id);
	void make(string& make);
	void model(string& model);
	void year(int year);
	void date(Date& date);
	void date(string& date);
	void cost(float cost);
	void picture(string& picture);
};
#endif /* SRC_CAR_H_ */
