#pragma once
#include"zombie.h"

class gamestate
{
	const int z_COUNT = 4;
	zombie zombies[4];

public:
	void init();
	void update();
	void start();

	void darwStatus() const;
	void drawround() const;
	bool isgameover() const;

};