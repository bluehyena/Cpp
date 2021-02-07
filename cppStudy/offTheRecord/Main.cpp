#include <cstdlib>
#include <iostream>
#include "Game.h"

int main(int argc, char* argv[])
{
	size_t playerCount = 0;
	/* get playerCount from command-line */
	/* ex: ./BlueMarble -p 2   ==> 2 players */
	/* if input is invalid, keep playerCount to 0 */
	Game* game = InitializeGame(playerCount);
	RunGame(game, std::cout, std::cin);

	DestroyGame(game);

	return 0;
}