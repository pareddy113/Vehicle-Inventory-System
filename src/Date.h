/*
 * Date.h
 *
 *  Created on: Apr 7, 2017
 *      Author: Avinash
 */

#ifndef SRC_DATE_H_
#define SRC_DATE_H_
#include "String.h"
#include <string.h>
using namespace std;
class Date{
public:
	Date();
	Date(string date);
	friend ostream &operator<<( ostream &output,const Date &S );
	friend istream &operator>>( istream &input, Date &S );
	int year_;
	string date_;
};




#endif /* SRC_DATE_H_ */
