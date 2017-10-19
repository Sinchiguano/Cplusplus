/*
 * 12_classes_Objects.cpp
 * Copyright (C) 2017 SINCHIGUANO CESAR <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the MIT license.
 */

//#include "12_classes_Objects.h"

#include<iostream>

using namespace std;


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

	CesarClass ceObject;
	ceObject.printSomething();

}

int  addNumbers(int x,int y)
{
}

