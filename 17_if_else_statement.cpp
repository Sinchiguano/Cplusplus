/*
 * 17_if_else_statement.cpp
 * Copyright (C) 2017 SINCHIGUANO CESAR <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the MIT license.
 */

//#include "17_if_else_statement.h"

#include<iostream>
//using namespace std;
int main()
{
  int age=44;
  if(age>24)
  {
    if(age>50)
    {
      std::cout<<"U are old\n";
    }
    else
    {
      std::cout<<"Nothing happens...\n";
    }
  }
  else
  {
    std::cout<<"Just study, no worries\n";
  }
}
