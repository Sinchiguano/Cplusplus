/*
 * 01_intro_classes.cpp
 * Copyright (C) 2017 SINCHIGUANO CESAR <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the MIT license.
 */

//#include "01_intro_classes.h"

#include<iostream>


//using namespace std;


//Class
class cesarCLASS
{
	public:
		void print_message()
		{
			std::cout<<"Cool saying!"<<"\n";
		}
};

int main(int argc, char const *argv[])
{

	cesarCLASS cesarOBJECT;

	cesarOBJECT.print_message();
	return 0;
}


