// October1-ContinuingTopic4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout; 
using std::string; 
using std::cin; 

int main()
{
	//bool isDoorOpen = true; //allowed values: True or False; 
	//
	////isDoorOpen = !isDoorOpen; 

	//if (isDoorOpen)
	//{
	//	//this stuff between the open brace { and the close brace } is called the "body" of the if statement 
	//	cout << "Come in.\n"; 
	//	cout << "Welkommen! Bienvenue\n";
	//	//int a = 12; 
	//	//int a = 123; //this variable named 'a' is ONLY defined within this block! (it has "scope" that is local
	//								//to this if statement
	//}
	//else
	//{
	//	cout << "Go away - door is closed for a reason\n";
	//}


	//cout << "Does this get printed?\n";

	//int age; 
	//cout << "Enter your age: \n";
	//cin >> age; 
	//if (age > 55)
	//{
	//	cout << "Senior citizen\n";
	//}

	//else//age <= 55
	//{
	//	cout << "Young 'un\n";
	//}

	//int hour = 10; //"military time" (8 pm) 
	//string time = (hour < 18) ? "Dayytime" : "Evening"; 

	//string time; 
	//if (hour < 18)
	//{
	//	time = "daytime";
	//}
	//else
	//{
	//	time = "Evening";
	//}

	//cout << "Time with hour = " << hour << " is meaning: " << time << "\n";
	
	int currentSpeed = 55; 

	bool isRainy = false; 
	bool isNight = true; 

	cout << std::boolalpha;
	//cout << !(isRainy) << "\n";
	if (isRainy || isNight) //"compound expression" 
	{
		cout << "Slowing down ... bad conditions\n";
		currentSpeed = currentSpeed - 5; 
	}

	else //(/*don't use parentheses with an ELSE*/)
	{
		cout << "continuing at current speed (not slowing down)\n";
		//currentSpeed = currentSpeed; 
		//do nothing to the currentSpeed 
	}

	//\|||||| //the "pipe character" means OR (the logical OR)
	//cout << (isRainy or isNight) << "\n";
}
