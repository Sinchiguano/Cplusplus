/*
 * 02_variables_in_classes.cpp
 * Copyright (C) 2017 SINCHIGUANO CESAR <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the MIT license.
 */

//#include "02_variables_in_classes.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;


//Class
class cesarCLASS
{
	public:
		//cesarCESAR() is a constructor function
		cesarCLASS(string z)
		{
			//std::cout<<"My Constructor\n"<<z;
			set_private_name(z);
		}

		string name;
		//We need to creat a public function to access into the private variables

		void set_private_name(string aux)
		{
			name_private=aux;
		}

		string get_private_name()
		{
			return name_private;
		}

		void print_message()
		{
			std::cout<<"Cool saying!"<<"\n";
		}
	private:
		string name_private;

};

int main(int argc, char const *argv[])
{
	/*
	cesarCLASS cesarOBJECT;
	cesarOBJECT.print_message();

	cesarCLASS ferOBJECT;
	ferOBJECT.name="CESAR SINCHIGUANO";
	std::cout<<"Something to see"<<ferOBJECT.name<<"\n";


	cesarCLASS changeOBJECT;
	changeOBJECT.set_private_name("Emmi San");
	std::cout<<"Her you are ur name:"<<changeOBJECT.get_private_name()<<"\n";
	*/

	//Constructor
	cesarCLASS constOBJECT("Martina..");
	std::cout<<constOBJECT.get_private_name()<<"\n";

	cesarCLASS anotheCONST("MArtha");
	std::cout<<anotheCONST.get_private_name()<<"\n";

	return 0;
}



