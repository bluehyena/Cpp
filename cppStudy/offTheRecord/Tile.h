#pragma once

typedef struct tile_t Tile;

/* Prototypes */
Tile* InitializeTile(eTileNameType tileName);
void DestroyTile(Tile* tile);

void UpdateTile(Tile* tile);