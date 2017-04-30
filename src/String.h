/*
 * String.h
 *
 *  Created on: Apr 7, 2017
 *      Author: Avinash
 */

#ifndef SRC_STRING_H_
#define SRC_STRING_H_
#include <iostream>
#include <stdio.h>
using namespace std;
class String{
public:
	String();
	String(char* a);
	String& intToStr(int i);
	friend ostream &operator<<( ostream &output,const String &S );
	friend istream &operator>>( istream &input, String &S );
//	char* getline(istream& ins, String& target);
	friend istream &getline(istream &ins, String &target);
	String& operator+=(const String& rhs);

public:
	char* str_;
};




#endif /* SRC_STRING_H_ */
