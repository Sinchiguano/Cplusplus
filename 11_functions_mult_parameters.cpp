/*
 * 11_functions_mult_parameters.cpp
 * Copyright (C) 2017 SINCHIGUANO CESAR <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the MIT license.
 */

//#include "11_functions_mult_parameters.h"
#include<iostream>

using namespace std;

//Clsses are easy way to group our functions and variables together.


int addNumbers(int x,int y);



int main()
{
    int c=29;
    cout<<addNumbers(2,5)<<endl;
    return 0;  
}

int  addNumbers(int x,int y)
{
    int answer=x+y;

    return answer;   
}

