/*
 * Car.cpp
 *
 *  Created on: Apr 7, 2017
 *      Author: Avinash
 */
#include "Car.h"

Car::Car(){}

Car::Car(int id){
	id_=id;
}
Car::Car( string make, string model, int year,Date date,float cost, string picture):make_(make),model_(model),date_(date),picture_(picture){
	make_=make;
	model_=model;
	year_=year;
	date_=date;
	cost_=cost;
	picture_=picture;
}

istream &operator>>( istream &input, Car &C ){		//overloading
	input >> C.make_
		  >> C.model_
		  >> C.year_
		  >> C.date_
		  >> C.cost_
		  >> C.picture_;
	return input;
}

ostream &operator<<( ostream &output,const Car &C ){
	output << "Id:"<< C.id_ << endl
			<< "Make:"<< C.make_ << endl
			<< "Model:"<< C.model_ << endl
			<< "Year:"<< C.year_ << endl
			<< "Date:"<< C.date_	<< endl
			<< "Cost:"<< C.cost_	<< endl
			<< "Picture:"<< C.picture_;

	return output;
}

int Car::id(){
	return id_;
}
string& Car::make(){
	return make_;
}
string& Car::model(){
	return model_;
}
int Car::year(){
	return year_;
}
Date& Car::date(){
	return date_;
}
float Car::cost(){
	return cost_;
}

string& Car::picture(){
	return picture_;
}

void Car::id(int id){
		id_=id;
	}
void Car::make(string& make){
	make_=make;
}
	void Car::model(string& model){
		model_=model;
	}
	void Car::year(int year){
		year_=year;
	}
	void Car::date(Date& date){
		date_=date;
	}
	void Car::date(string& date){
		date_=date;
	}
	void Car::cost(float cost){
		cost_=cost;
	}
	void Car::picture(string& picture){
		picture_=picture;
	}
