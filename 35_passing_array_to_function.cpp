/*
 * 35_passing_array_to_function.cpp
 * Copyright (C) 2017 Sinchiguano Cesar <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the public license.
 */

//#include "35_passing_array_to_function.h"
#include<iostream>



void sum_sum();


void print_array(int theArray[],int sizeofArray)
{
	for(int i=0;i<sizeofArray;i++)
	{
		std::cout<<"The array:"<<theArray[i]<<"\n";
	}
}




int main(int argc, char const *argv[])
{	

	int cesar[3]={32,6,2};
	int jessy[6]={23,563,21,4,7,2};


	print_array(cesar,3);
	std::cout<<"___________\n";
	print_array(jessy,6);
	
	




	return 0;
}







void sum_sum()
{
	/* code */
	int temp[5]={1,4,76,2,2};

	int sum=0;

	for(int i=0;i<5;i++)
	{
		sum+=temp[i];

	}

	std::cout<<"The sum of my array:"<<sum<<"\n";

}


