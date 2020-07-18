// Object.cpp
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the Object class, the base class for most other classes.

#include "Object.h"

Object::Object() {
	x = 0;
	y = 0;
	width = 0;
	height = 0;
}

Object::~Object() {}

int Object::get_x() { return x; }
int Object::get_y() { return y; }
int Object::get_width() { return width; }
int Object::get_height() { return height; }
double Object::get_weight() { return weight; }

void Object::set_x(int new_x) { x = new_x; }
void Object::set_y(int new_y) { y = new_y; }
void Object::set_width(int w) { width = w; }
void Object::set_height(int h) { height = h; }
void Object::set_weight(double w) { weight = w; }
