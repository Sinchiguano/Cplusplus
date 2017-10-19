/*
 * sentinel_controlled_program.cpp
 * Copyright (C) 2017 SINCHIGUANO CESAR <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the MIT license.
 */

//#include "sentinel_controlled_program.h"
#include<iostream>


//using namespace std;


int main()
{	
	int age;
	int ageTotal=0;
	int numberPeople=0;

	std::cout<<"Enter first persons or -1 to quit\n";
	std::cin>>age;
	while(age!=-1)
	{
		numberPeople++;
		ageTotal+=age;
		std::cout<<"Enter next persons age or -1 to quit\n ";
		std::cin>>age;
	}
	std::cout<<"Number of people enter:"<<numberPeople;
	std::cout<<"\n Average age:\n"<<ageTotal/numberPeople;
	

}



