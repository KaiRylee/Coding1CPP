// Emma Gooch, coding 1 week 14 sp 2025
// reading from and writing to files

#include "filez.h"
#include "ship.h"

int main() {
	cout << "Lets make some files! \n";

	string lines[15];

	readFromFile();
	ship minnow;
	minnow.type = CRUISER;
	minnow.status();
	writeToFile(" Did you get your switch 2 preorder? \n");

	writeShipToFile(minnow);
	return 0;
}

/*
	Files well use today

	1. mainW14  <-- this is the entry point for the rest of the program.
	2. filez.h
	3. filez.cpp
	4. ship.h
	5. ship.cpp

	the header file just has the #include and the function declartions
	the source file (.cpp) will have the function definitions
*/