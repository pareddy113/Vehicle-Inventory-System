
#include "FileHandle.h"

void FileHandle::writeFile(int id,Car& car){
	ofstream myfile;
	switch(id){
	case 1:
	myfile.open("1.txt");
	myfile<<car.id()<<endl<<car.make()<<endl<<car.model()<<endl<<car.year()<<endl<<car.date()<<endl<<car.cost()<<endl<<car.picture();
	myfile.close();
	break;
	case 2:
		myfile.open("2.txt");
		myfile<<car.id()<<endl<<car.make()<<endl<<car.model()<<endl<<car.year()<<endl<<car.date()<<endl<<car.cost()<<endl<<car.picture();
		myfile.close();
		break;
	case 3:
		myfile.open("3.txt");
		myfile<<car.id()<<endl<<car.make()<<endl<<car.model()<<endl<<car.year()<<endl<<car.date()<<endl<<car.cost()<<endl<<car.picture();
		myfile.close();
		break;
	case 4:
		myfile.open("4.txt");
		myfile<<car.id()<<endl<<car.make()<<endl<<car.model()<<endl<<car.year()<<endl<<car.date()<<endl<<car.cost()<<endl<<car.picture();
		myfile.close();
		break;
	case 5:
		myfile.open("5.txt");
		myfile<<car.id()<<endl<<car.make()<<endl<<car.model()<<endl<<car.year()<<endl<<car.date()<<endl<<car.cost()<<endl<<car.picture();
		myfile.close();
		break;
	}
}

	Car* FileHandle::readFile(int id,Car& car){
	string line;
	string strarray[7];
	int i=0;
	string str=to_string(id);
	ifstream myfile (str+".txt");
	if(myfile.is_open()){
		for( line; getline( myfile, line);)
		{
			strarray[i]=line;
			i++;
		}
		car.id(stoi(strarray[0]));
		car.make(strarray[1]);
		car.model(strarray[2]);
		car.year(stoi(strarray[3]));
		car.date(strarray[4]);
		car.cost(stoi(strarray[5]));
		car.picture(strarray[6]);
		return &car;
	}
	myfile.close();
	}
