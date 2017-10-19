/*
 * 21_assignment_and_increment.cpp
 * Copyright (C) 2017 SINCHIGUANO CESAR <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the MIT license.
 */

//#include "21_assignment_and_increment.h"

#include<iostream>


int main()
{
	int x=10;
	std::cout<<"\nx:"<<x;
	
	x-=3;
	std::cout<<"\nx:"<<x;
	x=10;
	x/=3;
	std::cout<<"\nx:"<<x;
	x=10;
	x%=3;
	std::cout<<"\nx:"<<x;
	std::cout<<"\nEnd\n";
	int temp=20;
	std::cout<<"++temp:"<<++temp<<"\n";
	std::cout<<"temp++:\n"<<temp++<<"\n";
	std::cout<<"temp:\n"<<temp<<"\n";

}

