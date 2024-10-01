#include <iostream>
#include <string>

#include<iomanip>

using namespace std;

int main()
{
    float priceOne = 0.0;
    float priceTwo = 0.0;
    float priceThree = 0.0;
    float tax = 0.0;
    float total = 0.0;
    string itemOne = "";
    string itemTwo = "";
    string itemThree = "";

    cout << "What is the name of your first item? \n";
    cin >> itemOne;
    cout << "What is the cost of your first item? \n";
    cin >> priceOne;

    cout << "What is the name of your second item? \n";
    cin >> itemTwo;
    cout << "What is the cost of your second item? \n";
    cin >> priceTwo;

    cout << "What is the name of your third item (enter none if there are less than three items)? \n";
    cin >> itemThree;
    cout << "What is the cost of your third item (enter 0.0 if no third item)? \n";
    cin >> priceThree;

    cout << itemOne << " costs $" << priceOne << "\n";
    cout << itemTwo << " costs $" << priceTwo << "\n";
    cout << itemThree << " costs $" << priceThree << "\n";

    total = priceOne + priceTwo + priceThree;
    cout << std::fixed << setprecision(2); 
    cout << "Your total is $" << total << "\n";
}


