// Item.cpp
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the item class. Item stats should be read off a txt. file (?)

#include "Item.h"

Item::Item(std::string st) {

	// Splits string by words and assigns the stats from array
	std::stringstream ssline(st);
	std::string* stats = new std::string[5]{};

	int i = 0;

	while (ssline.good() && i < 5) {
		ssline >> stats[i];
		++i;
	}

	type = stats[0];								// Specifies what class of item it is
	itemID = std::stoi(stats[1]);					// Item name/more specific 
	durability = std::stoi(stats[2]);
	rarity = std::stoi(stats[3]);
	value = std::stoi(stats[4]);					// Value of the item determines its price

	price = value + rarity * durability;			// An example of how we could calculate it

}

Item::~Item() {}

// Getters
std::string Item::get_type() { return type; }
int Item::get_itemID() { return itemID; }
int Item::get_rarity() { return rarity; }
double Item::get_durability() { return durability; }
double Item::get_value() { return value; }
double Item::get_price() { return price; }

// Setters
void Item::set_type(std::string t) { type = t; }
void Item::set_itemID(int id) { itemID = id; }
void Item::set_rarity(int r) { rarity = r; }
void Item::set_durability(double d) { durability = d; }
void Item::set_value(double v) { value = v; }
void Item::set_price(double p) { price = p; }



