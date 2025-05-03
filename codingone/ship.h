#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

enum shipType {FIGHTER, FRIGATE, FREIGHTER, CRUISER};

class ship
{
public:
	string name;
	int fuel;
	shipType type;

	ship();
	void status();

   
};

