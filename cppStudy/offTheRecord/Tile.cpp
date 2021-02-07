#include <iostream>

#include "Def.h"
#include "Tile.h"

struct tile_t
{
	eTileGroupType mGroupType;
	eTileType mType;
	eTileNameType mNameType;
	bool mbIsConsumable = false;
	size_t mStructurePrices[MAX_BUILDING_TYPE_COUNT] = { 0, };
	size_t mStructureTollFees[MAX_BUILDING_TYPE_COUNT] = { 0, };
	size_t mSpaceTravelFee = 0;
	size_t mLandPrice = 0;
	size_t mLandTollFee = 0;
	size_t mTotalTollFee = 0;
	const char* mName = nullptr;

	/* implement */
};

Tile* InitializeTile(eTileNameType eTileName)
{
	Tile* tile = new Tile();
	tile->mNameType = eTileName;

	switch (tile->mNameType)
	{
	case eTileNameType::START:
		tile->mGroupType = eTileGroupType::START;
		break;
	case eTileNameType::GOLDEN_KEY_0:
		[[fallthrough]];
	case eTileNameType::GOLDEN_KEY_1:
		[[fallthrough]];
	case eTileNameType::GOLDEN_KEY_2:
		[[fallthrough]];
	case eTileNameType::GOLDEN_KEY_3:
		[[fallthrough]];
	case eTileNameType::GOLDEN_KEY_4:
		[[fallthrough]];
	case eTileNameType::GOLDEN_KEY_5:
		tile->mGroupType = eTileGroupType::GOLDEN_KEY;
		break;
	case eTileNameType::NO_MANS_LAND:
		tile->mGroupType = eTileGroupType::NO_MANS_LAND;
		break;
	case eTileNameType::SOCIAL_WELFARE_FUND_WITHDRAW:
		tile->mGroupType = eTileGroupType::SOCIAL_WELFARE_FUND_WITHDRAW;
		break;
	case eTileNameType::SOCIAL_WELFARE_FUND_DEPOSIT:
		tile->mGroupType = eTileGroupType::SOCIAL_WELFARE_FUND_DEPOSIT;
		break;
	case eTileNameType::SPACE_TRAVEL:
		tile->mGroupType = eTileGroupType::SPACE_TRAVEL;
		break;
	case eTileNameType::TAIPEI:
		tile->mGroupType = eTileGroupType::YELLOW;
		tile->mLandPrice = 50000;
		tile->mLandTollFee = 2000;
		tile->mStructureTollFees[VILLA] = 10000;
		tile->mStructureTollFees[BUILDING] = 150000;
		tile->mStructureTollFees[HOTEL] = 250000;
		break;
	case eTileNameType::BEIJING:
		[[fallthrough]];
	case eTileNameType::MANILA:
		tile->mGroupType = eTileGroupType::YELLOW;
		tile->mLandPrice = 80000;
		tile->mLandTollFee = 4000;
		tile->mStructureTollFees[VILLA] = 20000;
		tile->mStructureTollFees[BUILDING] = 180000;
		tile->mStructureTollFees[HOTEL] = 450000;
		break;
	case eTileNameType::SINGAPORE:
		[[fallthrough]];
	case eTileNameType::CAIRO:
		tile->mGroupType = eTileGroupType::YELLOW;
		tile->mLandPrice = 100000;
		tile->mLandTollFee = 6000;
		tile->mStructureTollFees[VILLA] = 30000;
		tile->mStructureTollFees[BUILDING] = 270000;
		tile->mStructureTollFees[HOTEL] = 550000;
		break;
	case eTileNameType::ISTANBUL:
		tile->mGroupType = eTileGroupType::YELLOW;
		tile->mLandPrice = 120000;
		tile->mLandTollFee = 8000;
		tile->mStructureTollFees[VILLA] = 40000;
		tile->mStructureTollFees[BUILDING] = 300000;
		tile->mStructureTollFees[HOTEL] = 600000;
		break;
	case eTileNameType::ATHENS:
		tile->mGroupType = eTileGroupType::SKYBLUE;
		tile->mLandPrice = 140000;
		tile->mLandTollFee = 10000;
		tile->mStructureTollFees[VILLA] = 50000;
		tile->mStructureTollFees[BUILDING] = 450000;
		tile->mStructureTollFees[HOTEL] = 750000;
		break;
	case eTileNameType::COPENHAGEN:
		[[fallthrough]];
	case eTileNameType::STOCKHOLM:
		tile->mGroupType = eTileGroupType::SKYBLUE;
		tile->mLandPrice = 160000;
		tile->mLandTollFee = 12000;
		tile->mStructureTollFees[VILLA] = 60000;
		tile->mStructureTollFees[BUILDING] = 500000;
		tile->mStructureTollFees[HOTEL] = 900000;
		break;
	case eTileNameType::BERN:
		[[fallthrough]];
	case eTileNameType::BERLIN:
		tile->mGroupType = eTileGroupType::SKYBLUE;
		tile->mLandPrice = 180000;
		tile->mLandTollFee = 14000;
		tile->mStructureTollFees[VILLA] = 70000;
		tile->mStructureTollFees[BUILDING] = 500000;
		tile->mStructureTollFees[HOTEL] = 950000;
		break;
	case eTileNameType::OTTAWA:
		tile->mGroupType = eTileGroupType::SKYBLUE;
		tile->mLandPrice = 200000;
		tile->mLandTollFee = 16000;
		tile->mStructureTollFees[VILLA] = 80000;
		tile->mStructureTollFees[BUILDING] = 550000;
		tile->mStructureTollFees[HOTEL] = 1000000;
		break;
	case eTileNameType::BUENOS_AIRES:
		tile->mGroupType = eTileGroupType::NAVYBLUE;
		tile->mLandPrice = 220000;
		tile->mLandTollFee = 18000;
		tile->mStructureTollFees[VILLA] = 90000;
		tile->mStructureTollFees[BUILDING] = 700000;
		tile->mStructureTollFees[HOTEL] = 1050000;
		break;
	case eTileNameType::SAO_PAOLO:
		[[fallthrough]];
	case eTileNameType::SYDNEY:
		tile->mGroupType = eTileGroupType::NAVYBLUE;
		tile->mLandPrice = 240000;
		tile->mLandTollFee = 20000;
		tile->mStructureTollFees[VILLA] = 100000;
		tile->mStructureTollFees[BUILDING] = 750000;
		tile->mStructureTollFees[HOTEL] = 1100000;
		break;
	case eTileNameType::HAWAII:
		[[fallthrough]];
	case eTileNameType::LISBON:
		tile->mGroupType = eTileGroupType::NAVYBLUE;
		tile->mLandPrice = 260000;
		tile->mLandTollFee = 22000;
		tile->mStructureTollFees[VILLA] = 110000;
		tile->mStructureTollFees[BUILDING] = 800000;
		tile->mStructureTollFees[HOTEL] = 1150000;
		break;
	case eTileNameType::MADRID:
		tile->mGroupType = eTileGroupType::NAVYBLUE;
		tile->mLandPrice = 280000;
		tile->mLandTollFee = 24000;
		tile->mStructureTollFees[VILLA] = 120000;
		tile->mStructureTollFees[BUILDING] = 850000;
		tile->mStructureTollFees[HOTEL] = 1200000;
		break;
	case eTileNameType::TOKYO:
		tile->mGroupType = eTileGroupType::RED;
		tile->mLandPrice = 300000;
		tile->mLandTollFee = 26000;
		tile->mStructureTollFees[VILLA] = 130000;
		tile->mStructureTollFees[BUILDING] = 900000;
		tile->mStructureTollFees[HOTEL] = 1270000;
		break;
	case eTileNameType::PARIS:
		[[fallthrough]];
	case eTileNameType::ROME:
		tile->mGroupType = eTileGroupType::RED;
		tile->mLandPrice = 320000;
		tile->mLandTollFee = 28000;
		tile->mStructureTollFees[VILLA] = 150000;
		tile->mStructureTollFees[BUILDING] = 1000000;
		tile->mStructureTollFees[HOTEL] = 1400000;
		break;
	case eTileNameType::LONDON:
		[[fallthrough]];
	case eTileNameType::NEW_YORK:
		tile->mGroupType = eTileGroupType::RED;
		tile->mLandPrice = 350000;
		tile->mLandTollFee = 35000;
		tile->mStructureTollFees[VILLA] = 170000;
		tile->mStructureTollFees[BUILDING] = 1100000;
		tile->mStructureTollFees[HOTEL] = 1500000;
		break;
	case eTileNameType::CONCORD:
		tile->mGroupType = eTileGroupType::TRANSPORTATION;
		tile->mLandPrice = 200000;
		tile->mLandTollFee = 300000;
		break;
	case eTileNameType::QUEEN_ELIZABETH:
		tile->mGroupType = eTileGroupType::TRANSPORTATION;
		tile->mLandPrice = 300000;
		tile->mLandTollFee = 250000;
		break;
	case eTileNameType::COLUMBIA:
		tile->mGroupType = eTileGroupType::TRANSPORTATION;
		tile->mLandPrice = 450000;
		tile->mLandTollFee = 400000;
		break;
	case eTileNameType::JEJU_ISLAND:
		tile->mGroupType = eTileGroupType::KOREA;
		tile->mLandPrice = 200000;
		tile->mLandTollFee = 300000;
		break;
	case eTileNameType::BUSAN:
		tile->mGroupType = eTileGroupType::KOREA;
		tile->mLandPrice = 500000;
		tile->mLandTollFee = 600000;
		break;
	case eTileNameType::SEOUL:
		tile->mGroupType = eTileGroupType::KOREA;
		tile->mLandPrice = 1000000;
		tile->mLandTollFee = 2000000;
		break;
	default:
		break;
	}

	if (tile->mGroupType == eTileGroupType::YELLOW
		|| tile->mGroupType == eTileGroupType::SKYBLUE
		|| tile->mGroupType == eTileGroupType::NAVYBLUE
		|| tile->mGroupType == eTileGroupType::RED)
	{
		tile->mType = eTileType::COUNTRY;
		tile->mbIsConsumable = true;
		switch (tile->mGroupType)
		{
		case eTileGroupType::YELLOW:
			tile->mStructurePrices[VILLA] = 50000;
			tile->mStructurePrices[BUILDING] = 150000;
			tile->mStructurePrices[HOTEL] = 250000;
			break;
		case eTileGroupType::SKYBLUE:
			tile->mStructurePrices[VILLA] = 100000;
			tile->mStructurePrices[BUILDING] = 300000;
			tile->mStructurePrices[HOTEL] = 500000;
			break;
		case eTileGroupType::NAVYBLUE:
			tile->mStructurePrices[VILLA] = 150000;
			tile->mStructurePrices[BUILDING] = 450000;
			tile->mStructurePrices[HOTEL] = 750000;
			break;
		case eTileGroupType::RED:
			tile->mStructurePrices[VILLA] = 200000;
			tile->mStructurePrices[BUILDING] = 600000;
			tile->mStructurePrices[HOTEL] = 1000000;
			break;
		default:
			assert(false);
			break;
		}
	}
	else if (tile->mGroupType == eTileGroupType::KOREA || tile->mGroupType == eTileGroupType::TRANSPORTATION)
	{
		tile->mType = eTileType::KOREA_OR_TRANSPORTATION;
		tile->mbIsConsumable = true;
	}
	else
	{
		tile->mType = eTileType::SPECIAL;
		
		if (tile->mGroupType == eTileGroupType::SPACE_TRAVEL)
		{
			tile->mSpaceTravelFee = 200000;
			tile->mLandTollFee = tile->mSpaceTravelFee;
		}
	}

	tile->mTotalTollFee = tile->mLandTollFee;

	/* implement */

	return tile;
}

void DestroyTile(Tile* tile)
{
	/* implement */
}

void UpdateTile(Tile* tile)
{
	/* implement */
}