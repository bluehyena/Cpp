#include "Board.h"
#include "Player.h"

struct board_t
{
	/* member variables */
};

Board* InitializeBoard(size_t playerCount)
{
	Board* board = new Board();
	
	/* implement */

	return board;
}

void DestroyBoard(Board* board)
{
	/* implement */
}

void ProcessConstructibleTile(Board* board, /* implement */, std::ostream& os, std::istream& in)
{
	/* implement */
}

void ProcessConsumableTile(Board* board, /* implement */, std::ostream& os, std::istream& in)
{
	/* implement */
}

void ProcessSpecialTile(Board* board, /* implement */, std::ostream& os, std::istream& in)
{
	/* implement */
}

void ProcessTollFee(Board* board, /* implement */, std::ostream& os, std::istream& in)
{
	/* implement */
}

void UpdateBoard(Board* board)
{
	/* implement */
}