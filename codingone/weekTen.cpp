// Emma Gooch, 3/27/25, coding1 week 10
// use loop to ask for 3 fav foods
// add foods to an array
// use for loop to display the 3 foods
// run code

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;


// global variables are dangerous
// global variables exist in all functions in this sourcefile

const bool debug = true;

// Functions!
// f(x) = y
// All functions have a return type, name, and (input paramaters)
// dclaring, defining a new fuctions
// has return type of 'Void' meaning it returns nothing
// has one input paramater with a default value of 'Hello'


void sayHello(string greeting = "Hello!") {
	cout << greeting << "\n";
}

void sayGoodbye(string fairwell = "Goodbye!") {
	cout << fairwell << "\n";
}

int triple(int givenNunmber) {
	if (debug) cout << "givenNumber:" << givenNunmber << ".\n";

	return givenNunmber * 3;
}

string getPlayerName(int minSize = 4, int maxSize = 10) {
	string input;

	do {
		cout << "What is ur name?\n";
		getline(cin, input);
		if (input.size() < minSize) {
			cout << "Your name needs to be atleast " << minSize << " characters long!\n";
		}

		else if (input.size() > maxSize) {
			cout << "Your name cannot be more than " << maxSize << " characters!\n";
		}
		else {
			string greeting = "Hello " + input + "!";
			sayHello(greeting);
			return input;
		}

	} while (true);

}
// function overloading.
double triple(double givenNunmber) {
	if (debug) cout << "[givenNumber: " << givenNunmber << ".]\n";

	return givenNunmber * 3;
}
float triple(float givenNunmber) {
	if (debug) cout << "[givenNumber: " << givenNunmber << ".]\n";

	return givenNunmber * 3;
}

string triple(string givenNunmber) {
	if (debug) cout << "[givenNumber: " << givenNunmber << ".]\n";

	return givenNunmber + givenNunmber + givenNunmber;
}

int getRandNum(int minNum, int maxNum) {
	/* string input;
	cout << "Give me a minimum value!\n";
	getline(cin, input);
	input = smolNum;

	cout << "Give me a maximum value!\n";
	getline(cin, input);
	input = bigNum; */
	if (minNum >= maxNum) {
		cout << "I can't use these numbers/\n";
		return -1;
	}

	int range = (maxNum - minNum) + 1;
	return rand() % range + minNum;
}


int main() {
	srand(time(NULL));
	sayHello();
	sayHello("Whats up doc?");

	string playerName = getPlayerName();

	cout << "triple of 4 is " << triple(4) << ".\n";
	cout << "triple of 2.22222 is " << triple(2.22222) << ".\n";
	
	string input;
	cout << "Give me a minimum value!\n";
	getline(cin, input);
	int minNum = stoi(input);

	cout << "Give me a maximum value!\n";
	getline(cin, input);
	int maxNum = stoi(input);
	
	cout << "A random number between" << minNum << " and " << maxNum << "!\n";
	cout << "Is " << getRandNum(minNum, maxNum) << ".\n";

	cout << "Lets get your favorite foods! .\n";
	

	string favFoods[11];
	for (int i = 0; i < 3; i++) {
		cout << "Fav food " << i + 1 << " :";
		getline(cin, input);

		favFoods[i] = input;
	}

	cout << "Here are your favorite foods\n";
		for (int i = 0; i < 3; i++) {
			cout << favFoods[i] << ".\n";
			
	}

		sayGoodbye();
		sayGoodbye("bye girll byeeee");

}

