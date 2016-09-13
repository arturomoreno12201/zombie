#include<iostream>

#include"gameState.h"


int main()
{
	gamestate gs;

	gs.init();

	gs.start();
	
	while (!gs.isgameover())
	{

		gs.update();
		gs.drawround();


	}
	system("pause");

}