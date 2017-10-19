/*
 * 28_default_arguments.cpp
 * Copyright (C) 2017 SINCHIGUANO CESAR <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the MIT license.
 */

//#include "28_default_arguments.h"



#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>



using namespace std;
//DECLARATION OF MY prototype FUNCTIONS
void operator_incre();
void rate_money();
void for_loop();
void do_while();
void switch_statement();
void logical_operator();
void random_number();

int volumen_comp(int l=1,int w=1,int h=1)
{
	return l*w*h;
}


int main()
{
	std::cout<<"Volume:"<<volumen_comp()<<"\n";
	std::cout<<"Volume:"<<volumen_comp(1,2,4)<<"\n";


}

//#####################################
//BODY OF MY FUNCTIONS
//#################################

void random_number()
{
	//srand(43);//follow one pattern
	srand(time(0));//every second this value change

	std::cout<<"Random number: \n"<< rand();
	for(int i=1;i<20;i++)
	{
		std::cout<<"Numbers:"<<rand()<<"\n";
	}
	for(int i=1;i<20;i++)
	{
		std::cout<<"Numbers:"<<rand()%6<<"\n";

	}
	for(int i=1;i<20;i++)
	{
		std::cout<<"Numbers:"<<1+(rand()%6)<<"\n";
	}
}
void logical_operator()
{
	int age=23;
	int money=466;
	std::cout<<"\nHI\n";

	if(age>21)
	{
		if(money>500)
		{
			std::cout<<"\nU are allowed to be in!\n";
		}
		else
		{
			std::cout<<"Go away!\n";
		}
	}

	if(age>21 && money>500)
	{
		std::cout<<"\nU are allowed to be in!\n";
	}
	else
	{
		cout<<"\nWho are you"<<endl;
	}

	if(age>21 || money>500)
	{
		cout<<"from my or statement..."<<endl;
		std::cout<<"U are allowed to be in!\n";
	}
	else
	{
		cout<<"\nWho are you"<<endl;
	}
}


void switch_statement()
{
	std::cout<<"25_switch"<<"\n";
	int age=21;
	switch(age)
	{
		case 20:
			std::cout<<"\nU are allowed to drink...\n";
			break;
		case 25:
			std::cout<<"\nU should get a girlfriend...\n";
			break;
		default:
			std::cout<<"Do nothing"<<"\n";
	}
}

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
void for_loop()
{
	for(int x=1;x<10;x++)
	{
		std::cout<<"here u are ur x:"<<x<<"\n";
	}

}

void do_while()
{
	int x=1;
	do
	{
		std::cout<<"\nWorking with do while loop...."<<x<"\n";
		x++;
	}while(x<5);
	cout<<"\nEnd of my do while"<<endl;
}
