#pragma once
#include "Tile.h"

typedef struct player_t Player;

/* Prototypes */
Player* InitializePlayer(/* implement */);
void DestroyPlayer(Player* player);

std::ostream& PrintCurrentBalance(const Player* player, std::ostream& os);
std::ostream& PrintOwnedTiles(const Player* player, std::ostream& os, std::istream& in);
void UpdatePlayer(Player* player);