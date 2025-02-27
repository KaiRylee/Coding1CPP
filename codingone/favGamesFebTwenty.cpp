// Emma Gooch, Feb 20 - Feb 27
// Favorite game array homework

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(NULL));

	cout << "Welcome! Heres a database for your favorite games. Ready to start? \n";
	string input;
	getline(cin, input);
	
	do {
		cout << "Would you like to 'Add' 'Edit' 'Show' 'Remove' or 'Quit'?\n";
		string faveGame[10];
		string input;
		getline(cin, input);
		int currentElement = 0;
		if (input == "Add") {
			do {
				cout << "Enter your favorite games\n";
				getline(cin, input);
				faveGame[currentElement++] = input;
			} while (currentElement < 5);
			cout << "Great! Would you like to see your list?\n";

		}

		else if (input == "Edit") {
			cout << "What game would you like to change?\n";
			for (int i = 0; i < 10; i++) {
				if (input == faveGame[i]) {
					getline(cin, input);
					faveGame[i] = input;
				}
			}

		}
		else if (input == "Remove") {
			for (int i = 0; i < 10; i++) {
				if (input == faveGame[i]) {
					cout << "I've found the game, removing it now.\n";
					faveGame[i] = "";
				}
			}
		}

		else if (input == "Show") {
			for (int i = 0; i < 10; i++) {
				// this is how we skip removed or not-yet-added lines in our array
				if (faveGame[i] == "") {
					continue;
				}
				else {
					cout << faveGame[i] << ".\n";
				}
			}
		}
		else if (input == "Quit") {
			break;
		}
		else {
			cout << "i don't understand, please try 'Show' 'Add' 'Edit' 'Remove' or 'Quit'\n";
		}
	} while (input == "Yes");
} 