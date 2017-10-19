/*
 * 13_using_variables_class.cpp
 * Copyright (C) 2017 SINCHIGUANO CESAR <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the MIT license.
 */

//#include "13_using_variables_class.h"

#include<iostream>

using namespace std;


class ceVariable
{
	public:
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
		void printSomething()
		{
			cout<<"I am trying"<<endl;
		}
};

int addNumbers(int x,int y);

int main()
{
	cout<<"##############################"<<endl;
	ceVariable varOBJECT;
	varOBJECT.set_surname("Sinchiguano");
	cout<<varOBJECT.get_surname()<<endl;


	cout<<"_________________________________"<<endl;
	ceVariable varObject;
	varObject.name="Cesar Sinchiguano";

	cout<<varObject.name<<endl;

	CesarClass ceObject;
	ceObject.printSomething();

}

int  addNumbers(int x,int y)
{
}

