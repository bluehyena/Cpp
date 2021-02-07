#include <iostream>
#include <string>

#include "Def.h"
#include "Player.h"
#include "Tile.h"

struct player_t
{
	/* implement */
};

Player* InitializePlayer(/* implement */)
{
	Player* player = new Player();
	
	/* implement */

	return player;
}

void DestroyPlayer(Player* player)
{
	/* implement */
}

std::ostream& PrintCurrentBalance(const Player* player, std::ostream& os)
{
	/* implement */

	return os;
}

std::ostream& PrintOwnedTiles(const Player* player, std::ostream& os, std::istream& in)
{
	/* implement */

	return os;
}

void UpdatePlayer(Player* player)
{
	/* implement */
}