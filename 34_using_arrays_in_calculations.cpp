/*
 * 34_using_arrays_in_calculations.cpp
 * Copyright (C) 2017 Sinchiguano Cesar <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the public license.
 */

//#include "34_using_arrays_in_calculations.h"
#include<iostream>






int main(int argc, char const *argv[])
{
	/* code */
	int temp[5]={1,4,76,2,2};

	int sum=0;

	for(int i=0;i<5;i++)
	{
		sum+=temp[i];

	}

	std::cout<<"The sum of my array:"<<sum<<"\n";
	




	return 0;
}



