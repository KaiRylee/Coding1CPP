// Emma gooch Coding 1b Feb 20, 2025. 
// loops and list
/*
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	srand(time(NULL));
	cout << "Welcome to week 5!\n";
	cout << "What program would you like to run?\n";
	cout << "Press 1 for Keep Playing\n";
	cout << "Press 2 for Player Name\n";

	string input;
	getline(cin, input);

	

	if (stoi(input) == 1) {
		cout << "Lets start the Keep Playing program!\n";
	}
	else if (stoi(input) == 2) {
		cout << " Lets start the Player Name program!\n";
	}
	else {
		cout << "I dont understand that request.\n";
	}
	// lists	
		// arrays
		// vectors
	// loops
		// for loop
	//more logic
		// switch statement
		// if/elseif/else

	string colors[4];

	colors[0] = "Red";
	colors[1] = "Blue";
	colors[2] = "Green";
	colors[3] = "Yellow";

	cout << "The first color in our array of colors is " << colors[0] << ".\n";

	int iterator = 0;							// The interator counts, starting at 0
		while (iterator < 4) {					// as long as we're less than the array's size
			cout << colors[iterator] << "\n";	// send the array elements value to the console
			iterator += 1;						// add 1 to the iterator 
		}

	cout << "Who are your best friends?\n";

	string bestFriends[10];
	int currentElement = 0;

		do {
			cout << "Enter a name or type 'quit' to quit.\n";
			getline(cin, input);

			if (input == "quit") {
				break;
			}
			bestFriends[currentElement++] = input;   // After using currentElement, add 1
		} while (currentElement < 10);				// ! is the not operator.

		cout << "Here are all your best friends, looks like a great party!\n";
		// for(setup, test, action) { code }
		for (int i = 0; i < currentElement; i++) {
			cout << bestFriends[i] << "\n";
	}

		// create an array of 33 rand #s between 1777 and 2025
		// Then tell the user what the highest # in the array is
		cout << "Want some random #s?\n";
		getline(cin, input);

		if (input == "yes") {
			int years[33];
			int highScore = 0;
			//int years = (rand() % 249) + 1777;
			

				// check for highest value
			int min = 1777;
			int max = 2025;
			int range = max - min;
			int randomYear = (rand() % (range + 1)) + min;

			for (int i = 0; i < 33; i++ ) {
				years[i] = randomYear++;

				if (years[i] > highScore) {
					highScore = years[i];
				}
				cout << years[i] << "\n";
				cout << "The largest year in this is:" << highScore << "\n";

			}
			if (years[33] == 33) {
				cout << "The largest year in this is:" << highScore << "\n";
			}
		}

	return 0;
} 
*/