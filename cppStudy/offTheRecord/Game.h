#pragma once

#include <iostream>

typedef struct game_t Game; // game_t ¸¦ Game À¸·Î typedef

/* Prototypes */
Game* InitializeGame(size_t playerCount);
void DestroyGame(Game* game);
void RunGame(Game* game, std::ostream& os, std::istream& in);