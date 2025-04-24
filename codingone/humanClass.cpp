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
/*
#include <iostream>
#include <string>
using namespace std;

// creating a class named Human
// dont forget the semicolon
class human {
public:		

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


};
/*
class wizard : public human {
public:	
	int mana;

	void castSpell() {
		cout << name << " casts a spell \n";
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
	dumblydore.name;
	dumblydore.sayHello();
	dumblydore.castSpell();
	cout << " Classes, yeah!!\n";

	magicalGirl bbg;
	bbg.powerWordKill();
	/*human jeffery;
	jeffery.name = "Jeffery James Jonas Jr.";
	jeffery.health = 10;
	cout << "This is " << jeffery.name << ".\n";
	cout << jeffery.name << "Has " << jeffery.health << ".\n"; 



	return 0;
	
}  
*/ 