#include "filez.h"

void writeToFile(string givenString) {
	// open (or create) the file
	ofstream file("file.txt", ios::app);

	// confirm that the files is open
	if (!file.is_open()) {
		cout << "could not open file. \n";
		return;

	}
	// write text to the open file
	file << givenString;

	// close the file (which saves it to disk)
	file.close();


}

void readFromFile() {
	string fileContents;

	// open the file
	ifstream file("file.txt");

	// check that its actually open
	if (!file.is_open()) {
		cout << "could not open file \n";
	}
	// cout everything in file
	while (getline(file, fileContents)) {
		cout << fileContents << "\n";
	}
	// close file
	file.close();
}