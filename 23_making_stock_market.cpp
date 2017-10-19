/*
 * 23_making_stock_market.cpp
 * Copyright (C) 2017 SINCHIGUANO CESAR <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the MIT license.
 */

//#include "23_making_stock_market.h"
#include<iostream>
#include<cmath>



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
void for_loop();


int main()
{
	float a;
	float p=10000;
	float r=.03;//rate

	for(int day=1;day<=30;day++)
	{
		a=p*pow(1+r,day);

		std::cout<<day<<"--------"<<a<<"\n";

	}



}

void for_loop()
{
	for(int x=1;x<10;x++)
	{
		std::cout<<"here u are ur x:"<<x<<"\n";
	}

}
