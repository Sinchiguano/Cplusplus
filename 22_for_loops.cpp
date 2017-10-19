/*
 * 22_for_loops.cpp
 * Copyright (C) 2017 SINCHIGUANO CESAR <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the MIT license.
 */

//#include "22_for_loops.h"
#include<iostream>


void operator_incre()
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
	std::cout<<"temp:\n"<<temp<<"\n"<<"\n";
}



int main()
{
	for(int x=1;x<10;x++)
	{
		std::cout<<"here u are ur x:"<<x<<"\n";

	}
}














