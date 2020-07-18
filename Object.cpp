// Object.cpp
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the Object class, the base class for most other classes.

#include "Object.h"

Object::Object() {
	position.x = 0;
	position.y = 0;
	width = 0;
	height = 0;
}

Object::~Object() {}

SDL_Point Object::get_position() { return position; }
int Object::get_x() { return position.x; }
int Object::get_y() { return position.y; }
int Object::get_width() { return width; }
int Object::get_height() { return height; }
double Object::get_weight() { return weight; }

void Object::set_position(int x, int y) {
	position.x = x;
	position.y = y;
}
void Object::set_x(int new_x) { position.x = new_x; }
void Object::set_y(int new_y) { position.y = new_y; }
void Object::set_width(int w) { width = w; }
void Object::set_height(int h) { height = h; }
void Object::set_weight(double w) { weight = w; }
