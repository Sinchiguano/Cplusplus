/*
 * 24_do_while_loop.cpp
 * Copyright (C) 2017 SINCHIGUANO CESAR <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the MIT license.
 */

//#include "24_do_while_loop.h"




#include<iostream>
#include<cmath>

using namespace std;


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
void rate_money()
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

int main()
{
	int x=1;
	do
	{
		std::cout<<"\nWorking with do while loop...."<<x<"\n";
		x++;


	}while(x<5);
	cout<<"\nEnd of my do while"<<endl;
	


}

void for_loop()
{
	for(int x=1;x<10;x++)
	{
		std::cout<<"here u are ur x:"<<x<<"\n";
	}

}
