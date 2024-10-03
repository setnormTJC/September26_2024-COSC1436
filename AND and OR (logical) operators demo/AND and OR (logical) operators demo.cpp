// AND and OR (logical) operators demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout; 
using std::string; 


int main()
{
    //std::cout << "Hello World!\n";
    //& -> "bitwise AND" (not the conjunction in an English sentence)
    cout << "Enter two animals\n";
    string first_animal, second_animal; 

    std::cin >> first_animal >> second_animal; 
    //if (first_animal == "cat" && second_animal == "dog")
    //{
    //    
    //    system("catDog.jpg");
    //}

    //else
    //{
    //    cout << "Cat and dog were NOT entered\n";
    //}

    if (first_animal == "cat")
    {
        if (second_animal == "dog")
        {
            system("catDog.jpg");
        }
        else
        {
            cout << "cat was entered first, but dog was NOT entered second\n";
        }
    }

    else
    {
        cout << "Cat and dog were NOT entered\n";
    }
}

