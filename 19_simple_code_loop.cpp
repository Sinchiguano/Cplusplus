/*
 * 19_simple_code_loop.cpp
 * Copyright (C) 2017 SINCHIGUANO CESAR <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the MIT license.
 */

//#include "19_simple_code_loop.h"
#include<iostream>


using namespace std;

int main()
{
  int temp=0;
  int number;
  int sum=0;
  while(temp<=4)
  {
    std::cout<<"Enter the numbers...\n";
    std::cin>>number;
    std::cout<<"This is your number man\n"<<number<<"\n";
    sum+=number;
    std::cout<<"__________________________________________________\n";

    std::cout<<"Here u are the total of your numbers so far :\n"<<sum<<" \n";
    temp++;
  }
}
