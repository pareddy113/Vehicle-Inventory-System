/*
 * Date.cpp
 *
 *  Created on: Apr 7, 2017
 *      Author: Avinash
 */

#include "Date.h"

using namespace std;
Date::Date(){
}
Date::Date(string dat){
	date_=dat;
}

ostream &operator<<( ostream &output, const Date &D ) {
        output <<D.date_;
        return output;
     }

istream &operator>>( istream &input, Date &D ) {
        input >> D.date_;
        return input;
     }

