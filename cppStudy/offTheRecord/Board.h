#pragma once

#include "Def.h"
#include "Player.h"
#include "Tile.h"

typedef struct board_t Board;

/* Prototypes */
Board* InitializeBoard(size_t playerCount);
void DestroyBoard(Board* board);

void ProcessConstructibleTile(Board* board, /* extra parameters */, std::ostream& os, std::istream& in);
void ProcessConsumableTile(Board* board, /* extra parameters */, std::ostream& os, std::istream& in);
void ProcessSpecialTile(Board* board, /* extra parameters */, std::ostream& os, std::istream& in);
void ProcessTollFee(Board* board, /* extra parameters */, std::ostream& os, std::istream& in);

void UpdateBoard(Board* board);