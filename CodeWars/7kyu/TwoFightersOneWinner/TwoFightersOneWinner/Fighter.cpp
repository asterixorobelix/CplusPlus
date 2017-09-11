#include "Fighter.h"
#include <iostream>


Fighter::Fighter(std::string name, int health, int damage): Name(name), Health(health), DamagePerAttack(damage)
{
}

bool Fighter::Dead() {
	if (Health <= 0) {
		return true;
	}
	else {
		return false;
	}
}

std::string Fighter::GetName() {
	return Name;
}

int Fighter::GetHealth() {
	return Health;
}

int Fighter::GetDamagePerAttack() {
	return DamagePerAttack;
}

void Fighter::SetHealth(int h) {
	Health = h;
}

std::string DeclareWinner(Fighter f1, Fighter f2, std::string first) {
	using namespace std;
	std::string RoundWinner;

	cout << first << " goes first\n";

	while (!f1.Dead()&&!f2.Dead()) {
		
		if (f1.Name == first) {
			RoundWinner=Fight(f1, f2);
		}
		else {
			RoundWinner = Fight(f2, f1);
		}
	}

	return RoundWinner;
}

std::string Fight(Fighter FGHT1, Fighter FGHT2) {
	FGHT2.Health -= FGHT1.DamagePerAttack;

}