/*
 * 32_arrays.cpp
 * Copyright (C) 2017 SINCHIGUANO CESAR <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the MIT license.
 */

//#include "32_arrays.h"

#include<iostream>





int factorialFinder(int x);




int main(int argc, char const *argv[])
{
	/* code */
	int array_num[]={12,34,56,34,23,12};

	for(int i=0;i<=5;i++)
	{
		std::cout<<"array_num["<<i<<"]"<<":"<<array_num[i]<<"\n";

	}



	return 0;
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