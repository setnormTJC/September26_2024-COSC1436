// If else if else if else demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout; 
using std::string; 

int main()
{
	while (true)
	{
		cout << "Enter the animal that you would like to display\n";
		string response;

		std::cin >> response;

		if (response == "cat")
		{
			system("cat.jpg");
		}

		else if (response == "horse")
		{
			system("horse.jpg");
		}

		//if (!(response == "cat" || response != "horse")) //this condition is deduced
	/*	if (response != "cat" && response != "horse")*/ //this condition is deduced 
		else//()
		{
			cout << "Unrecognized animal\n";
		}
	}
}
