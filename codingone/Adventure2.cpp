// Story()
//-return type is void
// AskYesNo()
// - One string argument named "question"
// - return type is bool
// RollDie()
// - one int parameter named "sides" with a default value of 6
// - return type is int
// Ending()
// - return type is void
// Adventure()
// - return type is void or bool
// - calls rollDie() for attack, block, & treasure
// - tells the player their health after the encounter
/*
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

bool debug;

void story(string story = "When in need of money, every good adventurer plunges to the depths of the dungeons, seeking treasures, monsters, and magic!") {
	cout << story << "\n";
}

int main() {

	int playerHealth = 10;
	int monsterHealth = 10;
	int attack;
	int block;
	int turns = 10;

	cout << "Welcome player, ready for an adventure?\n";
	cout << "(Y)es or (N)o?\n";
	string input;
	getline(cin, input);



	if (input == "yes" || "Y") {
		srand(time(NULL));
		cout << "Lets start!\n";
		cout << "As you venture deeper into the dungeon, a strange, gnarly beast lunges at you...\n";
		cout << "Your health: " << playerHealth << "\n";
		cout << "Monsters Health: " << monsterHealth << "\n";
		cout << "The beast gets a suprise round! CHOMP! \n";
		int damageOne = (rand() % 4) + 1;
		cout << damageOne << " damage! Ouch!" "\n";
		playerHealth = playerHealth - damageOne;
		cout << "Your health is now " << playerHealth << "\n";
		cout << "Your turn.\n";
		do {
			turns += 1;
			attack = (rand() % 4) + 1;
			monsterHealth = monsterHealth - attack;
			cout << "You hit the monster! The monster attacks back! \n";
			int damageTwo = (rand() % 4) + 1;
			block = (rand() % 4) + 1;
			if (block >= damageTwo) {
				cout << "Nice block!\n";
			}
			else {
				playerHealth = playerHealth - damageOne;
				cout << "Ouch! You have " << playerHealth << "health \n";
			}
			cout << "Attack or Run?";
			string input;
			cin >> input;

			if (input == "Attack") {
				cout << "you prepare to attack!\n";
			}

			if (input == "Run") {
				cout << "You run to saftey!\n";
				break;
			}
			if (monsterHealth < 1) {
				cout << "The beast is dead! \n";
				break;
			}
			if (playerHealth < 1) {
				cout << "You have died! Game over!\n";
				break;
			}

		} while (playerHealth > 0); */