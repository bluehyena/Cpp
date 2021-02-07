#include <cstring>
#include <string>
#include "Def.h"

const char* GetTileNameByTileNameType(eTileNameType tileNameType)
{
	return TILE_NAME_LIST[static_cast<size_t>(tileNameType)];
}

bool PressEnter(std::ostream& os, std::istream& in)
{
	/* implement */
	
	return false;
}

char ReadCharacter(const char* question, const char* validCharacters, std::ostream& os, std::istream& in)
{
	/* implement */

	return '\0';
}

const char* ReadWord(const char* question, const char** validWords, size_t wordsCount, std::ostream& os, std::istream& in)
{
	/* implement */

	return nullptr;
}

size_t ReadNumber(const char* question, size_t firstNumber, size_t lastNumber, std::ostream& os, std::istream& in)
{
	/* implement. use atoi function from cstdlib */

	return '\0';
}