#include <iostream>
#include <string>
using namespace std;


class human {

protected:		// change from private to allow child classes to inherit these variables.

	string name;
	int health;
	int damage;

public:
	human(string givenName, int givenHealth, int givenBaseDamage) {
		name = givenName;
		health = givenHealth;
		damage = givenBaseDamage;

		cout << "I have shown up!\n";
	}

	human() {
		name = "Jim";
		health = 30;
		damage = 4;

	}

	void SayHello() {
		cout << "Hello! My name is " << name << " and my total health is " << health << ".\n";
	}

	void SayGoodbye() {
		cout << "I was recalled to the factory for medical help.\n";
	}

	void SetHealth(int baseHealth) {
		if (baseHealth < 1) {
			health = 0;
			cout << "Oh no! " << name << " died!\n";
		}
		else if (baseHealth > 30) {
			health = 30;
			cout << name << " is at full health!\n";
		}
		else {
			health = baseHealth;
			cout << name << " has " << health << " hit points left!\n";
		}
	}

	void SetDamage(int baseDamage) {
		if (health < 15) {
			baseDamage = 5;
		}
		else if (health > 15) {
			baseDamage = damage;
		}
	}

	void ChangeHealth(int by = 1) {
		int tempHealth = health;
		tempHealth += by;
		SetHealth(tempHealth); 

	}

	int GetHealth() {
		return health;
	}
	int GetDamage() {
		return damage;
	}


	void SetName(string givenName) {
		if (givenName.size() < 2) {
			cout << "Name is too short!\n";
			return;     // return nothing out of a void function to end the function. THIS WILL NOT END THE PROGRAM
		}
		else if (givenName.size() > 20) {
			cout << "Name is too long!\n";
			return;
		}
		else {
			name = givenName;
		}
	}
	string GetName() {
		return name;
	}
};

// the wizard class inherits from the human class.
// everything that the human class has, so does the wizard.
class wizard : public human {
public:
	int mana;

	void castSpell() {
		cout << name << " casts a spell!\n";
	}
	void poison(human& target) {
		cout << "The terrible wizard " << name << " Has poisoned " << target.GetName() << "!!\n";
		int halfOfTargetHealth = target.GetHealth() / 2;
		target.ChangeHealth(-halfOfTargetHealth); 


	}
};

class magicalGirl : public human {
public:
	int friendship;

	void powerWordKill() {
		cout << name << " Strikes you down in the name of Mars! \n";
	}
};


int main() {

	wizard dumblydore;
	dumblydore.SetName("Abloose");
	dumblydore.SayHello();
	dumblydore.castSpell();

	cout << "Here comes a human! \n";

	human jeffery;
	jeffery.SetName("Jeffery James Jonas Jr ");
	jeffery.SetHealth(50);

	

	cout << "This is " << jeffery.GetName() << " and they have a base health of " << jeffery.GetHealth() << " hit points and at full health they can do " << jeffery.GetDamage() << " points of damage!\n";
	cout << "Greet us Jim!\n";
	jeffery.SayHello();

	cout << "[Checking health after poison] \n";
	dumblydore.poison(jeffery);

	jeffery.ChangeHealth(14);
	cout << "Oh no! Jeffery decided to go adventuring and they came back hurt!\n";
	cout << "They now have " << jeffery.GetHealth() << " hit points left and can only do " << jeffery.GetDamage() << " points of damage now!\n";

	jeffery.SayGoodbye();

	return 0;
}
