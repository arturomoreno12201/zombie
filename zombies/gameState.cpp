#include<iostream>
#include "gameState.h"



void gamestate::init()
{

	zombies[0].init("cam", "food");
	zombies[1].init("hana", "food");
	zombies[2].init("jef", "food");
	zombies[3].init("tim", "food");

}

void gamestate::start()
{

	printf("the contestants are: \n");
	darwStatus();
	printf("fight");

}

void gamestate::darwStatus() const
{
	for (int i = 0; i < z_COUNT; ++i)
		zombies[i].draw(false);

}

void gamestate::drawround() const
{
	for (int i = 0; i < z_COUNT; ++i)
		zombies[i].draw(false);
}

void gamestate::update()
{

	for (int i = 0; i < z_COUNT; ++i)
		if (zombies[i].isAlive())
			zombies[rand() % z_COUNT].takeDamage(zombies[i].rollAttack());

}

bool gamestate::isgameover() const
{
	bool gameOver = false;


	int livingZombies = 0;
	for (int i = 0; i < z_COUNT; ++i)

		if (zombies[i].isAlive())

			livingZombies++;

	return livingZombies == 1;


}
