/*
 * 14_constructors.cpp
 * Copyright (C) 2017 SINCHIGUANO CESAR <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the MIT license.
 */

//#include "14_constructors.h"
#include<iostream>

using namespace std;

//Constructors, a function that runs by default
class ceVariable
{
	public:
		//contructor
		//Start
		ceVariable(string z)
		{
			set_surname(z);
			//cout<<"This is printing automatically..."<<endl;
		}
		//End

		string name;
		void set_surname(string temp)
		{
			surname=temp;
		}

		string get_surname()
		{
			return surname;
		}
	private:
		string surname;
};
class CesarClass
{
	public:
		//constructor
		CesarClass()
		{
			cout<<"Again my constructor"<<endl;
		}
		void printSomething()
		{
			cout<<"I am trying"<<endl;
		}
};
int addNumbers(int x,int y);
int main()
{
	ceVariable bo("Cesitar");//I am creating a new object but for this case I will pass some argument
	cout<<bo.get_surname()<<endl;	


	ceVariable varOBJECT("Car");
	//varOBJECT.set_surname("Sinchiguano");
	cout<<varOBJECT.get_surname()<<endl;
	/*
	cout<<"##############################"<<endl;
	ceVariable varOBJECT;
	varOBJECT.set_surname("Sinchiguano");
	cout<<varOBJECT.get_surname()<<endl;
	*/
	/*
	cout<<"_________________________________"<<endl;
	ceVariable varObject;
	varObject.name="Cesar Sinchiguano";

	cout<<varObject.name<<endl;

	CesarClass ceObject;
	ceObject.printSomething();
	*/
}

int  addNumbers(int x,int y)
{
}


