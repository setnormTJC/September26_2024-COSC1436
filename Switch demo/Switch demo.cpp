// Switch demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout; 
using std::string; 

int main()
{
	while (true)
	{


		cout << "What do you want to hear? \n";
		cout << "p - a guitar-ish plucked note\n";
		cout << "c - a chirp (rising pitch)\n";
		cout << "s - a sawtooth wave (\"retro\" game music)\n";

		char choice;

		std::cin >> choice;

		switch (choice)
		{
		case 'p':
			//use of the "system" function to play audio files is NOT
			//"system-agnostic" 

			system("pluck.wav"); //wav is an UNCOMPRESSED (high fi) audio format (mp3 is compressed) 
			break;

		case 'c':
			system("chirp.wav");

		case 's':
			system("sawtooth.wav");
			//if a break is omitted, then the program execution "falls through the cases"

		default: 
			cout << "You entered something other than c, s, or p\n";
			break; 
		}

	}
	//system("chirp.wav");
	//system("pluck.wav");
	
	//system("sawtooth.wav");
	
	
	//switch
}
