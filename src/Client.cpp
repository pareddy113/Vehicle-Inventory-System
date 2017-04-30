/*
 * Client.cpp

 *
 *  Created on: Apr 7, 2017
 *      Author: Avinash
 */

#include "FileHandle.h"

using namespace std;

int main(){
	int arr[]={};
	CarPtr type[5];		//create objects for CarPtr
	CarPtr CP1(1);
	CarPtr CP2(2);
	CarPtr CP3(3);
	CarPtr CP4(4);
	CarPtr CP5(5);
	type[0]=CP1;
	type[1]=CP2;
	type[2]=CP3;	//save carpointer in array
	type[3]=CP4;
	type[4]=CP5;


	int i=0;
	while(true){
		char fun;
		cout<< endl<<"Enter the character:";
		cin >> fun;
		int num=((int)fun)-49;
		switch(fun){
		case 'c':			//create an object
		{
			if(i<5){
				cout<<"Enter Make, Model, Year, Date, Cost, Picture each on a line:";
				type[i].createInstance(i+1);
//				string avi(CP1->model());
//				cout<<*CP1;
				i++;
				continue;
			}
			else{
				cout << "Already created 5 Car instances"<<endl;
				continue;
			}
		}
		case 'l':				//list all the values
		{
			if(i<=0){
				cout << "No Car instances created, create one"<<endl;
				continue;
			}
			else {
			for(int j=0;j<i;j++){
				type[j].readInstance(j+1);
//				cout << CP1->id();
			}
			continue;
		}
		}
		case '1':
		case '2':		//edit an instance
		case '3':
		case '4':
		case '5':
		{
			if(num<i){
				type[num].editInstance(num+1);
			continue;
			}
			else{
				cout<<"Create the instance first";
				continue;
			}
		}
		case 'p':				//change the price of an instance
		{
			float newPrice;
			cout<<"enter the new price:";
			cin>>newPrice;
			type[num].editPriceInstance(num+1,newPrice);

			cout<<"output";
			continue;
		}
		case 's':			//to save the output to the file
		{
			cout<<"case1";
			continue;
		}
		case 'q':			//quits the loop
		{
			break;
		}
		default:
			cout<<"enter a proper option";
			continue;
		}
		return 0;
	}

}

