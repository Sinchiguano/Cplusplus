/*
 * 33_create_using_loops.cpp
 * Copyright (C) 2017 SINCHIGUANO CESAR <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the MIT license.
 */

//#include "33_create_using_loops.h"

#include<iostream>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>



using namespace std;



int factorialFinder(int x);
void array_number();

int main(int argc, char const *argv[])
{
	srand(time(0));//every second this value change
	int array_array[9];
	

	for(int i=0;i<9;i++)
	{
		array_array[i]=rand()%26;
	}
	std::cout<<"Element -- Value"<<"\n";

	for(int i=0;i<9;i++)
	{
		std::cout<<i<<"--"<<array_array[i]<<endl;
	}	



	return 0;
}


void array_number()
{
	/* code */
	int array_num[]={12,34,56,34,23,12};

	for(int i=0;i<=5;i++)
	{
		std::cout<<"array_num["<<i<<"]"<<":"<<array_num[i]<<"\n";

	}
}





int factorialFinder(int x)
{	if (x==1)
	{
		return 1;
	}
	else
	{
		return x*factorialFinder(x-1) ;
	}

}


