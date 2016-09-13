#include<iostream>
#include"zombie.h"


int randRange(int min, int max) { return rand() % (max - min)+ min; }

void zombie::init(const char a_name[], const char a_occ[])
{

	sprintf_s(name, "%s", a_name);
	sprintf_s(prior,"%s", a_occ);
	health = randRange(90, 150);
	attack = randRange(10, 25);
	critRate = randRange(5,25);
	kill = 0;


}

void zombie::draw(bool brief) const
{

	printf("%s %s", name, prior);

	if (!brief)
		printf("\thealth, %d\n\attack: %D \n", health, attack);


}

bool zombie::isAlive() const { return health > 0; }
void zombie::takeDamage(int dmg) { health -= dmg; }
int zombie::rollAttack()const { return attack; }