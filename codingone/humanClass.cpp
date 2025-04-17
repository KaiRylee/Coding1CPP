// Emma gooch
// Coding 1 Week 11 homework, 4/12/2025
// build a human class with these included:
// string Name
// int Health = 10
// int Damage = 4
// a Constructor with parameters for name, health, baseDamage
// void SayHello()
// void SetHealth(int byAmount)
// void SetDamage(int givenDamage)
// int GetHealth()
// int GetDamage()

#include <iostream>
#include <string>
using namespace std;

// creating a class named Human
// dont forget the semicolon
class human {
private:			// only i can see this

	string name;
	string phrase;      
	int health;
	int damage;

	// this is a constructor, needs to be named same as class, no return type

public:				// anyone can see, call, and change this
	human(string givenName = "Jeffery", int givenDamage = 4, int givenHealth = 10) {
		// assings this instances varaibles to the given values
		name = givenName;
		damage = givenDamage;
		health = givenHealth;

		// so we know the cxontrustor is running.
		cout << "New character! \n";
	}


	void sayHello() {
		cout << "My name is " << name << " My health is " << health << ".\n";
		cout << "I do " << damage << " damage with my sword! .\n";
	}

protected:
};

int main() {
	cout << "Classes, yeah!!\n";

	/*human jeffery;
	jeffery.name = "Jeffery James Jonas Jr.";
	jeffery.health = 10;
	cout << "This is " << jeffery.name << ".\n";
	cout << jeffery.name << "Has " << jeffery.health << ".\n"; */

	jeffery.sayHello();

	return 0;
	
}