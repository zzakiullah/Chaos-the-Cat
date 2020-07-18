#pragma once
// Item.h
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the item class.

#include <iostream>
#include <SDL.h>
#include "Object.h"
#include <string>
#include <sstream>					// For std::string, std::stoi (converts string to int).

class Item : public Object{

private:
	int stat_num;					// Number of total item stats.
	std::string type;				// Specifies what class of item it is.
	int id;							// Identifies the item within its subcategory.
	double durability;				// The permanence of the item .
	int rarity;						// Determines how often the item will spawn.
	double value;					// Value of the item determines its price.
	double price;					// Selling price of the item.

public:

	/* Constructor will take in a string from a .txt file, parse it by words, and put into an array. Member variables
	will be assigned from the array. */
	Item(std::string st);
	~Item();

	// Getters

	std::string get_type();
	int get_id();
	double get_rarity();
	double get_durability();
	double get_value();
	double get_price();

	// Setters

	void set_type(std::string t);
	void set_id(int new_id);
	void set_rarity(double r);
	void set_durability(double d);
	void set_value(double v);
	void set_price(double p);

};
