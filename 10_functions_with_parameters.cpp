/*
 * 10_functions_with_parameters.cpp
 * Copyright (C) 2017 SINCHIGUANO CESAR <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the MIT license.
 */

//#include "10_functions_with_parameters.h"


#include<iostream>

using namespace std;



void printCrap(int x);


int main()
{
    int c=29;
    printCrap(c);

    return 0;  

}


void printCrap(int x)
{
    cout<<"Cesar's number is "<<x<<endl;
    
}
