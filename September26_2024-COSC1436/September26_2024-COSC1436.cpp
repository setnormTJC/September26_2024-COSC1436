// September26_2024-COSC1436.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string> 

using std::cout; 
using std::string; 

int main()
{
	//cout << "Do you want this program to continue?\n";
	//std::string response; 

	//std::getline(std::cin, response);
	string correctPassword = "123456";

	string enteredPassword = "abcde";

	cout << "Are the passwords the same?\n" << std::boolalpha 
		<< (enteredPassword == correctPassword) << "\n"; //equality operator (==)
	
	//5 + 2 -> an example of an ARITHMETIC expression 
	
	//string licensePlate = "asd1234";
	int lastLicensePlateDigit = 4; 
	cout << "Is it even? " << (lastLicensePlateDigit % 2 == 0) << "\n"; //parity -> Computer Networks (parity bit) 
	//mod 
	cout << (3.14 < 2.81) << "\n";  //also a binary operator 
	//if (0) { cout << "2"; }

	cout << "5 <= 5 yields: " << (5 <= 5) << "\n";
	cout << "Enter some number: \n";
	int someNumber; 
	std:: cin >> someNumber;

	cout << someNumber << "!= 5 yields: " << (someNumber != 5) << "\n";
	
	bool itFits = true; 
	if (itFits)
	{
		cout << "I sits\n";
		system("cat.jpg"); //this will generate an error if you don't have a file named 
							//cat.jpg in the same folder as this cpp file ...
	}
}

