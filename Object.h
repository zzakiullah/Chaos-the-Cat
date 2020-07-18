#pragma once
// Object.cpp
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the Object class, the base class for most other classes.

#include <iostream>
#include <SDL.h>

class Object {

private:
	SDL_Point position;							// Top left coordinate of the button.
	int width, height;
	double weight;

public:
	Object();
	~Object();

	SDL_Point get_position();
	int get_x();
	int get_y();
	int get_width();
	int get_height();
	double get_weight();

	void set_position(int x, int y);
	void set_x(int new_x);
	void set_y(int new_y);
	void set_width(int w);
	void set_height(int h);
	void set_weight(double w);
};
