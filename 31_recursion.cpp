/*
 * 31_recursion.cpp
 * Copyright (C) 2017 SINCHIGUANO CESAR <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the MIT license.
 */

//#include "31_recursion.h"

#include<iostream>


void recursion_function()
{
	std::cout<<"I am cesar\n";

	//recursion_function();
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
//Compute factorial

int main(int argc, char const *argv[])
{
	/* code */
	//recursion_function();
	int num=3;
	std::cout<<"Here is the factorial of "<<num<<":"<<factorialFinder(num)<<"\n";


	return 0;
}