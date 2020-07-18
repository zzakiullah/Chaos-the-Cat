// Item.cpp
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the item class. Item stats should be read off a .txt file (?)

#include "Item.h"

Item::Item(std::string st) {

	statNum = 5;

	std::stringstream ssline(st);					// Convert stream into stringstream.
	std::string* stats = new std::string[5]{};		

	int i = 0;

	// Checks if the stream raises any errors and extracts the words to be put into the array. 
	while (ssline.good() && i < statNum) {
		ssline >> stats[i];
		++i;
	}

	type = stats[0];								
	itemID = std::stoi(stats[1]);					
	durability = std::stod(stats[2]);
	rarity = std::stod(stats[3]);
	value = std::stod(stats[4]);					

	price = value + rarity * durability;			// An example of how we could calculate it.

}

Item::~Item() {}

// Getters

std::string Item::get_type() { return type; }
int Item::get_itemID() { return itemID; }
double Item::get_rarity() { return rarity; }
double Item::get_durability() { return durability; }
double Item::get_value() { return value; }
double Item::get_price() { return price; }

// Setters

void Item::set_type(std::string t) { type = t; }
void Item::set_itemID(int id) { itemID = id; }
void Item::set_rarity(double r) { rarity = r; }
void Item::set_durability(double d) { durability = d; }
void Item::set_value(double v) { value = v; }
void Item::set_price(double p) { price = p; }



