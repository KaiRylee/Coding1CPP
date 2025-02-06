/*

// Emma Gooch- Coding 1 spring 2025, week 3. 
// Varaibles, logic, and randomness

#include <iostream>     // In out stream: Sends text to and from the console
#include <string>       // allows us to use string variables.
#include <ctime>
#include <cstdlib>
using namespace std;    // so we dont have to type "std;" at start of lines

// This is where the program starts running. 
// Its a function that returns an interger
int main() {
    srand(time(NULL));
    cout << "Here's a random number for you: " << rand() << ".\n";
    cout << "Here's a random number for you: " << rand() << ".\n";
    cout << "Here's a random number for you: " << rand() << ".\n";

    // modulus gives the remainder of long div.
    cout << "7 divided by 2 = " << 7 / 2 << " with a remainder of " << 7 % 2 << ".\n";

    cout << " A random number between 1 and 10 (Inclusive): " << (rand() % 10) + 1 << ".\n";

    cout << "Here are this weeks grades for the class. (Between 50 and 100).\n";
    int counter = 0;
    // while the test is true, keep looping
    // while (test) { code block }
    while (counter < 10) {
        counter += 1;
        cout << (rand() % 50) + 50 << "\n";
    }
    
    string input;
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    if (name == "Emma" || name == "Katie") {
        cout << " Password ? " << endl;
        cin >> input;
        if (input == "Pizza") {
            cout << "Hello, creator! <3\n";
        }
        else {
            cout << "IMPOSTER!! ALERT! ALERT! ALERT!\n";
            return 0;
        }
    }
    else {
        cout << "Hello, " << name << "! <3" << endl;
    }

    
    // all code inside a block should be indented
    cout << "\tWelcome to week 3\n";
    cout << "we're talking about variable, logic, and randomness today.\n";

    // variables are nicknames for data.
    // creating a variable of the type integer
    // named "age"
    // with decalred value of "19"
    int age = 19;       // defing the variable, but not defining the variable.
    int score = 0;

    cout << "Always intialized your variables.\n";

    int playerOneFuelAmount = 43;    // camelCase. ur chronically online, you already know this 

    // an integer is a whole number, pos or neg, between -2bil and =2bil.
    int oceanDepth = -234;

    // floats are floating-point numbers. they have a decimal point!
    // they are accurate to 7-digits, need f or will be msitaken for doubles
    const float pi = 3.14159f;

    // doubles are double-precision floating point numbers. accurate to 22-digits
    double someNumberWithDecimalPlaces = 234.2432432432432;

    // Task: Send the 4 numbers to the console
    cout << "Player 1's fuel amount is " << playerOneFuelAmount << ".\n";
    cout << "The ocean depth is " << oceanDepth << ".\n";
    cout << "Pi equals  " << pi << ".\n ";
    cout << "Vibes equate to " << someNumberWithDecimalPlaces << ".\n";

    cout << "are you ready to play a game?\n";
    // char is a single character, anything you can type on your keyboard.
    char playerCharInput; 'n';
    // a string is an ordered list of characters. An array
    name = "Emma";

    int totalTurns = 0;
    do {
        cout << "Press 'y' to keep playing. \n";  // ask for input
        cin >> playerCharInput;                    // get input
        totalTurns += 1;                           // Explain Increment and comb assin. operators
     
        // -- Subtracts, ++ adds to a list Incremnt operators
    }
    while (playerCharInput == 'y');             // test input

    cout << "You played for " << totalTurns << "turns!\n";
    // all code inside a block should be indented
    cout << "\tWelcome to week 3\n";
    cout << "we're talking about variable, logic, and randomness today.\n";

    // whne using random numbers, dont forget to 
    // #include <cstdlib> // for rand() and srand ()
    // #include <ctime>   // for time()

} // end of main
*/