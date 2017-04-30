/*
 * String.cpp

 *
 *  Created on: Apr 7, 2017
 *      Author: Avinash
 */

#include "String.h"

String::String(){
}
String::String(char* a){
	str_=a;
}

ostream &operator<<( ostream &output, const String &S ) {
        output << S.str_;
        return output;
     }

istream &operator>>( istream &input, String &S ) {
        input >> S.str_;
        return input;
}

//istream &getline(istream &ins, String &target){
//		ins >> target;
//		return target;
//}

//        char* String::getline(istream& ins, String& target)
//        {
//        	String tempstring;
//        	char* li=new char[20];
//        	int i=0;
//        	char ch;
//        	ins.get(ch);
//        	while (ch!='\n' && !ins.eof()) //check for end of file
//        	{
//        		li[i]=ch;
//        		ins.get(ch);
//        		i++;
//        	}
//        	target=tempstring;
//        	i=0;
//        	return li;
//        }
