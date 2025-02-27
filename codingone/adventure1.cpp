//
	//welcome the player
		//set up the game
			// int health = 10, attack, block, turns = 0
			// seed the random number generator
		// start the loop
			// add 1 to turns
			// start the encounter
			// randomly generate numbers for attack(range = 0 - 4) and block(range = 0 - 4)
			// if block is greater or equal to attack, successful block
				// otherwise, subtract attack value from health.
		// ask the player if they would like to keep adventuring. if they don't, break out of the loop.
		// keep looping while health is greater than zero and fewer than 4 turns have happened

		// if health is greater than 0, congratulate player
			// otherwise, tell the player they're dead.

// I wrote the majority of this with a fever, and kept experiencing weird file access errors. be warned.
/* #include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

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
			cout << "Your health is now " << playerHealth << "\n" ;
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

			} while (playerHealth > 0);
			/*while (turns > 4 || monsterHealth < 1) {
				cout << "Keep playing?\n";
				string input;
				cin >> input;

				if (input == "yes") {
					cout << "Here we go again!\n";
				}
				else {
					cout << "Thanks for playing!\n";
					break;      
				}
			}
			

		} 
		
		if (input == "no" || "N") {
			cout << "Goodbye! \n";
			return 0;
		} 
		


} 
*/