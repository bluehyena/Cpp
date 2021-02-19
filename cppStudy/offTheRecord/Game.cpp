#include <cassert>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

#include "Board.h"
#include "Def.h"
#include "Game.h"
#include "Player.h"

struct game_t
{
	std::ostream& os;
	std::istream& in;
	int turn; 
	/* implement */
};

ePlayerChoice getPlayerChoice(Game* game, /* implement */, std::ostream& os, std::istream& in);
void initGame(Game* game, std::ostream& os, std::istream& in);
void loadGame(Game* game, std::ostream& os, std::istream& in);
size_t rollDie();
bool runGame(Game* game, std::ostream& os, std::istream& in);
void runStartMenu(Game* game, std::ostream& os, std::istream& in);

Game* InitializeGame(size_t playerCount)
{
	Game* game = new Game();
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	initGame(game, game.os, game.in);
	/* implement */

	return game;
}

void DestroyGame(Game* game)
{
	/* implement */
	delete game;
}

void RunGame(Game* game, std::ostream& os, std::istream& in)
{
	runStartMenu(game, os, in);
}

ePlayerChoice getPlayerChoice(Game* game, Player* player, std::ostream& os, std::istream& in)
{
	/* implement */

	return ePlayerChoice::NONE;
}

void initGame(Game* game, std::ostream& os, std::istream& in)
{
	char playerCount = ReadCharacter("Enter number of players correctly (2 ~ 4): ", "234", os, in);
	switch (playerCount)
	{
	case '2':
		[[fallthrough]];
	case '3':
		[[fallthrough]];
	case '4':
		/* implement */
		break;
	default:
		assert(false);
		break;
	}

	/* implement */
}

void loadGame(Game* game)
{
	/* implement */
}

size_t rollDie()
{
	size_t firstDice = std::rand() % 6 + 1;
	size_t secondDice = std::rand() % 6 + 1;

	return firstDice * 10 + secondDice;
}

void runStartMenu(Game* game, std::ostream& os, std::istream& in)
{
	while (true)
	{
		os << "=============================================KhuMarble==============================================\n";
		os << "|(1)        Start New Game                                                                         |\n";
		os << "|(2)        Load Saved Game                                                                        |\n";
		os << "|(3)        Exit                                                                                   |\n";
		os << "====================================================================================================" << std::endl;

		bool bIsGameRunning = false;
		switch (ReadCharacter("Enter your choice: ", "123", os, in))
		{
		case '1':
			/* Get Num of users if command-line failed to fetch number of players */
			/* use initGame(game, os, in) */
			bIsGameRunning = true;
			while (bIsGameRunning)
			{
				bIsGameRunning = runGame(game, os, in);
			}
			break;
		case '2':
			loadGame(game, os, in);
			break;
		case '3':
			DestroyGame(game);
			os << "Exiting Game" << std::endl;
			return;
		default:
			break;
		}
	}
}

bool runGame(Game* game, std::ostream& os, std::istream& in)
{
	bool bIsLoopDone = true;
	while (bIsLoopDone)
	{
		/* implement */
	}

	return true;
}