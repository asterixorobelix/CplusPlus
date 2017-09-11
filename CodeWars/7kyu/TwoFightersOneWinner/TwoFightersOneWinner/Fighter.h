#pragma once
#include <string>

class Fighter
{
public:
	Fighter(std::string name, int health, int damage);
	std::string GetName();
	int GetHealth();
	int GetDamagePerAttack();
	void SetHealth(int h);
	bool Dead();
	friend std::string DeclareWinner(Fighter f1,Fighter f2, std::string first);
	friend std::string Fight(Fighter FGHT1, Fighter FGHT2);
private:
	std::string Name;
	int Health, DamagePerAttack;
};

