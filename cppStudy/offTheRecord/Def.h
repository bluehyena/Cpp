#pragma once

#include <cassert>
#include <iomanip>
#include <iostream>

enum class ePlayerChoice
{
	NONE,
	ROLL_DIE,
	SPACE_TRAVEL,
	CHECK_BALANCE,
	CHECK_OWNED_LANDS
};

enum class eTileNameType
{
	START,
	TAIPEI,
	GOLDEN_KEY_0,
	BEIJING,
	MANILA,
	JEJU_ISLAND,
	SINGAPORE,
	GOLDEN_KEY_1,
	CAIRO,
	ISTANBUL,
	NO_MANS_LAND,
	ATHENS, 
	GOLDEN_KEY_2, 
	COPENHAGEN, 
	STOCKHOLM, 
	CONCORD, 
	BERN, 
	GOLDEN_KEY_3, 
	BERLIN, 
	OTTAWA,
	SOCIAL_WELFARE_FUND_WITHDRAW,
	BUENOS_AIRES, 
	GOLDEN_KEY_4, 
	SAO_PAOLO, 
	SYDNEY, 
	BUSAN, 
	HAWAII, 
	LISBON, 
	QUEEN_ELIZABETH, 
	MADRID,
	SPACE_TRAVEL,
	TOKYO, 
	COLUMBIA, 
	PARIS,
	ROME, 
	GOLDEN_KEY_5, 
	LONDON, 
	NEW_YORK, 
	SOCIAL_WELFARE_FUND_DEPOSIT,
	SEOUL
};

enum class eTileGroupType
{
	YELLOW,
	SKYBLUE,
	NAVYBLUE,
	RED,
	KOREA,
	TRANSPORTATION, 
	START,
	GOLDEN_KEY,
	NO_MANS_LAND,
	SOCIAL_WELFARE_FUND_WITHDRAW, 
	SOCIAL_WELFARE_FUND_DEPOSIT,
	SPACE_TRAVEL
};

enum class eTileType
{
	SPECIAL,
	COUNTRY,
	KOREA_OR_TRANSPORTATION,
};

constexpr size_t LAND_COUNT = 40;
constexpr size_t MAX_PLAYER_COUNT = 4;
constexpr size_t MAX_BUILDING_TYPE_COUNT = 3;

constexpr size_t VILLA = 0;
constexpr size_t BUILDING = 1;
constexpr size_t HOTEL = 2;

constexpr eTileNameType TILE_LIST[LAND_COUNT] = {
	eTileNameType::START,
	eTileNameType::TAIPEI, eTileNameType::GOLDEN_KEY_0, eTileNameType::BEIJING, eTileNameType::MANILA, eTileNameType::JEJU_ISLAND, eTileNameType::SINGAPORE, eTileNameType::GOLDEN_KEY_1, eTileNameType::CAIRO, eTileNameType::ISTANBUL,
	eTileNameType::NO_MANS_LAND,
	eTileNameType::ATHENS, eTileNameType::GOLDEN_KEY_2, eTileNameType::COPENHAGEN, eTileNameType::STOCKHOLM, eTileNameType::CONCORD, eTileNameType::BERN, eTileNameType::GOLDEN_KEY_3, eTileNameType::BERLIN, eTileNameType::OTTAWA,
	eTileNameType::SOCIAL_WELFARE_FUND_WITHDRAW,
	eTileNameType::BUENOS_AIRES, eTileNameType::GOLDEN_KEY_4, eTileNameType::SAO_PAOLO, eTileNameType::SYDNEY, eTileNameType::BUSAN, eTileNameType::HAWAII, eTileNameType::LISBON, eTileNameType::QUEEN_ELIZABETH, eTileNameType::MADRID,
	eTileNameType::SPACE_TRAVEL,
	eTileNameType::TOKYO, eTileNameType::COLUMBIA, eTileNameType::PARIS, eTileNameType::ROME, eTileNameType::GOLDEN_KEY_5, eTileNameType::LONDON, eTileNameType::NEW_YORK, eTileNameType::SOCIAL_WELFARE_FUND_DEPOSIT, eTileNameType::SEOUL
};

constexpr const char* TILE_NAME_LIST[LAND_COUNT] = {
	"Start", "Taipei", "Golden Key", "Beijing", "Manila", "Jeju Island", "Singapore", "Golden Key", "Cairo",
	"Istanbul", "No Mans Land", "Athens", "Golden Key", "Copenhagen", "Stokholm", "Concord", "Bern", "Golden Key",
	"Berlin", "Ottawa", "Social Welfare Fund Withdraw", "Buenos Aires", "Golden Key", "Sao Paulo", "Sydney",
	"Busan", "Hawaii", "Lisbon", "Queen Elizabeth", "Madrid", "Space Travel", "Tokyo", "Columbia", "Paris", "Rome",
	"Golden Key", "London", "New York", "Social Welfare Fund Deposit", "Seoul"
};

constexpr eTileGroupType TILE_GROUP_LIST[LAND_COUNT] = {
	eTileGroupType::START,
	eTileGroupType::RED, eTileGroupType::GOLDEN_KEY, eTileGroupType::RED, eTileGroupType::RED, eTileGroupType::KOREA, eTileGroupType::RED, eTileGroupType::GOLDEN_KEY, eTileGroupType::RED, eTileGroupType::RED,
	eTileGroupType::NO_MANS_LAND,
	eTileGroupType::SKYBLUE, eTileGroupType::GOLDEN_KEY, eTileGroupType::SKYBLUE,eTileGroupType::SKYBLUE, eTileGroupType::TRANSPORTATION, eTileGroupType::SKYBLUE, eTileGroupType::GOLDEN_KEY, eTileGroupType::SKYBLUE, eTileGroupType::SKYBLUE,
	eTileGroupType::SOCIAL_WELFARE_FUND_WITHDRAW,
	eTileGroupType::NAVYBLUE, eTileGroupType::GOLDEN_KEY, eTileGroupType::NAVYBLUE,eTileGroupType::NAVYBLUE, eTileGroupType::KOREA, eTileGroupType::NAVYBLUE, eTileGroupType::NAVYBLUE, eTileGroupType::TRANSPORTATION, eTileGroupType::NAVYBLUE,
	eTileGroupType::SPACE_TRAVEL, 
	eTileGroupType::RED, eTileGroupType::TRANSPORTATION, eTileGroupType::RED, eTileGroupType::RED, eTileGroupType::GOLDEN_KEY, eTileGroupType::RED, eTileGroupType::RED, eTileGroupType::SOCIAL_WELFARE_FUND_DEPOSIT, eTileGroupType::KOREA
};

const char* GetTileNameByTileNameType(eTileNameType tileNameType);
bool PressEnter(std::ostream& os, std::istream& in);
char ReadCharacter(const char* question, const char* validCharacters, std::ostream& os, std::istream& in);
const char* ReadWord(const char* question, const char** validWords, size_t wordsCount, std::ostream& os, std::istream& in);
size_t ReadNumber(const char* question, size_t firstNumber, size_t lastNumber, std::ostream& os, std::istream& in);
