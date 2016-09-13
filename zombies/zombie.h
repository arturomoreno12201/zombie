#pragma once
class zombie 
{
private:
	char name[64];
	char prior[64];

	int health;
	int attack;
	int critRate;
	int kill;

public:
	void init(const char naem[], const char occ[] );
	void takeDamage(int dmg);

	int rollAttack() const;
	void draw(bool brief) const;

	bool isAlive() const;



};