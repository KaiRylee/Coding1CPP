// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// No. 2s: in Main() ask user what their name is, then say "Hello <name>!"

#include <iostream>
#include <string>
using namespace std;
int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    if (name == "Emma" or "Katie") {
        std::cout << "Hello, creator! <3" << std::endl;
    }
    else {
        std::cout << "Hello, " << name << "! <3" << std::endl;
    }
    
}

