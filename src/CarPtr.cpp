/*
 * CarPtr.cpp
 *
 *  Created on: Apr 7, 2017
 *      Author: Avinash
 */
#include "CarPtr.h"
static int carInst_=0;
static FileHandle file;
CarPtr::CarPtr(){

}
CarPtr::CarPtr(int i):id(i),cCar(NULL){
}
CarPtr::~CarPtr(){

}
Car* CarPtr::operator->(){ //overloading operator
	if(cCar== NULL){
		cCar=file.readFile(id,*cCar);
		return cCar;
	}
}

Car& CarPtr::operator*(){		//overloadin operator
	if(cCar ==NULL){
		cCar=file.readFile(id,*cCar);
		return *cCar;
	}
}

void CarPtr::createInstance(int i){ //to create an instance based on user input
	if(carInst_<2){
//		cCar1=new Car(i);
		cCar1->id(i);
		carInst_++;
		std::cin >> *cCar1;
		cout << *cCar1;
		FileHandle file;
		file.writeFile(i,*cCar1);
		carInst_--;
	}
	else{
		cout<< "Sorry! cannot have more than two Car instances in memory";
	}
}

void CarPtr::readInstance(int i){ //to read the instance from the files
	if(carInst_<2){
		cCar1->id(i);
//		cCar1->id(i);
		carInst_++;
		cCar1=file.readFile(i,*cCar1);
		cout<< *cCar1;
		cout << endl;
		carInst_--;
	}
	else{
			cout<< "Sorry! cannot have more than two Car instances in memory";
		}
}

void CarPtr::editInstance(int i){
		if(carInst_<2){
			cCar1->id(i);
			carInst_++;
			cCar1=file.readFile(i,*cCar1);
			cout<<"Ready to edit the instance...";

			carInst_--;
		}
	else{
			cout<< "Releasing memory for the previous held edit car instances";

		}
}

void CarPtr::editPriceInstance(int i,float q){	//edit price
		if(carInst_<2){
			cout<<"done2";
			cCar1->id(i);
			cout<<"done1";
			cCar1->cost(q);
			cout << "done";
			carInst_--;
		}
	else{
			cout<< "Releasing memory for the previous held edit car instances";

		}
}

void CarPtr::saveInstance(int i){
}

