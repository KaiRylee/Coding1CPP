// Emma Gooch Coding 1 spring 2025 
// Recap! 
/*

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

// This is where the program starts
int main() {
	// a program to ask for the users name and reply based on the input.
	srand(time(NULL));
	bool debug = false;			// debug mode is OFF unless player is us

	cout << "Welcome to thursday! \n";
	cout << "Whats your name?\n";
	string input;
	getline(cin, input);

	if (input == "Emma") {
		cout << "Hello Creator!";
		debug = true;
		if (debug) cout << "Debug mode is ON.\n";
	}
	else {
		cout << "Hello " << input << " !\n";
	}

	// build a "Guess the number game"
	// Computer picks a rand number between 1 and 10 Includive
	// the player then guesses, and the computer says "higher" or "lower"

	// need the includes
	// need srand(time(0));
	// Need while loop to allow player to keep guessing

	if (false) {
		int theNumber = rand() % 10 + 1;
		if (debug) cout << "The number is " << theNumber << ".\n";
		int guess = 0;

		cout << "I am thinking of a number between 1 and 10, inclusive. \nCan you guess the number?\n";

		while (guess != theNumber) {
			cout << "What is your guess?\n>>";
			getline(cin, input);
			guess = stoi(input);

			if (guess == theNumber) {
				cout << "You got it!\n";
				break;
			}

			if (guess > theNumber) {
				cout << "Too high!\n";
			}
			else {
				cout << "Too low!\n";
			}
		}
	} // end of if false

	if (true) {
		// VECTORS!
		// vectors are resizable arrays'
		// dont forget #include <vector>

		//use a collection initializer whne creating new vector
	
		vector<string> favBooks = { "Little Women", "The Sun is Also a Star" , "The Hitchhikers Guide to the Galaxy"};
		cout << "The first book in my list of favBooks is " << favBooks[0] << "!\n";

		cout << "Please add another book to the list.\n";
		getline(cin, input);

		favBooks.push_back(input);

		cout << "There are now " << favBooks.size() << " books in the list\n";
		cout << "The last book in the list is " << favBooks[favBooks.size() - 1] << "!\n";

		// useful stuff after push_back with vectors
		// Include <algorithm> for .find() .sort() and .shuffle()

		cout << "Here is the unsorted list\n";
		for (int i = 0; i < favBooks.size(); i++) {
			cout << favBooks[i] << "\n";
		}
		cout << "lets sort the list \n";
		sort(favBooks.begin(), favBooks.end());

		cout << "Here is the sorted list\n";
		for (int i = 0; i < favBooks.size(); i++) {
			cout << favBooks[i] << "\n";
		}

		cout << "Randomly Shuffling the list:\n";
		random_shuffle(favBooks.begin(), favBooks.end());

		cout << "hHre is the shuffled list\n";
		for (int i = 0; i < favBooks.size(); i++) {
			cout << favBooks[i] << "\n";
		}
		cout << "Give me a book from the list, and I'll tell you what postion it is in the list.\n";
		getline(cin, input);
		vector<string>::iterator iter;
		iter = find(favBooks.begin(), favBooks.end(), input);

		if (iter != favBooks.end()) {
			cout << *iter << "\n";
		}
		else {
			cout << "that book is not in the list. \n";
		}
	}

} */