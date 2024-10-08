// Oct8 - finishing up Topic 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include"iomanip"

#include"fstream"

#include"string"
#include <cassert>

using std::cout; 
using std::setprecision; 

int main()
{
	//double sum = (2.0 / 7.0) + (3.0 / 7.0) + (2.0 / 7.0); 
	//cout << setprecision(17) << "Sum is: " << sum << "\n";

	//double one = 1.0; 

	//if (sum == one) //beware the dangers of "floating point comparison" 
	//{
	//	cout << "The two numbers are equal!\n";

	//}

	//else //this means the two numbers are NOT equal (!=)
	//{
	//	cout << "The numbers are NOT equal\n";
	//}

	//std::ifstream fin{ "kalamazoo.txt" };

	//std::string lineFromFile; 
	//if (fin.is_open())
	//{
	//	getline(fin, lineFromFile);

	//	cout << "That file contains: " << lineFromFile << "\n";
	//	fin.close(); 
	//}

	//else //this means the file was NOT able to be opened properly (probably because it wasn't found!) 
	//{
	//	cout << "FNFE\n";
	//	return 6; //this is called an "early return" 
	//}

	//cout << "Does this get printed?\n";

	int numerator, denominator; 
	numerator = 4; 

	cout << "Enter a denominator to divide " << numerator << " by:\n";
	std::cin >> denominator; 

	assert(denominator != 0);

	int quotient = numerator / denominator; 
	cout << "Quotient is: " << quotient << "\n";
}
