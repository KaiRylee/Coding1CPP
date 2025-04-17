// Emma Gooch, Feb 20 - Feb 27
// Favorite game array homework 
/*
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(NULL));

	cout << "Welcome! Heres a database for your favorite games. Ready to start? \n";
	cout << "Would you like to 'Add' 'Edit' 'Show' 'Remove' or 'Quit'?\n";

	string input;
	getline(cin, input);
	string faveGame[10];
	int currentElement = 0;
	do {
		if (input == "Add") {
			cout << "Enter your favorite games\n";
			getline(cin, input);
			faveGame[currentElement++] = input;
		} // Changed from a Do while to an if statement
		else if (input == "Add 5") {
			do {
				cout << "Enter your favorite games\n";
				getline(cin, input);
				faveGame[currentElement++] = input;
			} while (currentElement < 5);
			cout << "Great! Would you like to see your list?\n"; // Bulk add for quick testing

		}

		else if (input == "Edit") {
			cout << "What game would you like to change?\n";
			getline(cin, input);
			for (int i = 0; i < currentElement; i++) {
				if (faveGame[i] == input) {
					cout << "Found it! What would you like it to be?\n";
					getline(cin, input);
					faveGame[i] = input;
					cout << "Game is now" << faveGame[i] << ".\n";
				}
				if (i + 1 == currentElement) {
					cout << "We are at the end of the list, still no game.\n";
				}
			} // I had to follow along in class for this one

		}
		else if (input == "Remove") {
			cout << "What game would you like to remove ? \n";
			getline(cin, input);
			for (int i = 0; i < currentElement; i++) {
				if (input == faveGame[i]) {
					cout << "I've found the game, removing it now.\n";
					faveGame[i] = "";
				}
			}
		}

		else if (input == "Show") {
			for (int i = 0; i < currentElement; i++) {
				// this is how we skip removed or not-yet-added lines in our array
				cout << "Here's your games!\n";
				if (faveGame[i] == "") {
					continue;
				}
				else {
					cout << faveGame[i] << ".\n";
				}
			}
		}
		else if (input == "Quit") {
			cout << "Goodbye!\n";
		}
		else {
			cout << "i don't understand, please try 'Show' 'Add' 'Edit' 'Remove' or 'Quit'\n";
		} // keeps breaking, spamming this command when putting a getlin input in. Was working before i followed in class, trying to troubleshoot.
	} while(true); */
} 