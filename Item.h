#pragma once
// Item.h
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the item class.

#include <iostream>
#include <SDL.h>
#include "Object.h"
#include <string>
#include <sstream>	// std::string, std::stoi (converts string to int) 

class Item : public Object{

private:
	std::string type;
	int itemID;
	double durability;
	int rarity;
	double value;
	double price;

public:

	// Constructor and destructor
	Item(std::string st);
	~Item();

	// Getters
	std::string get_type();
	int get_itemID();
	int get_rarity();
	double get_durability();
	double get_value();
	double get_price();

	// Setters
	void set_type(std::string t);
	void set_itemID(int id);
	void set_rarity(int r);
	void set_durability(double d);
	void set_value(double v);
	void set_price(double p);

};
