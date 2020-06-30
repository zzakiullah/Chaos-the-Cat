// Object.cpp
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the Object class, the base class for most other classes.

#include "Object.h"

Object::Object() {
	Object::x = 0;
	Object::y = 0;
	Object::width = 0;
	Object::height = 0;
}

Object::~Object() {}

int Object::get_x() { return Object::x; }
int Object::get_y() { return Object::y; }
int Object::get_width() { return Object::width; }
int Object::get_height() { return Object::height; }

void Object::set_x(int new_x) { Object::x = new_x; }
void Object::set_y(int new_y) { Object::y = new_y; }
void Object::set_width(int w) { Object::width = w; }
void Object::set_height(int h) { Object::height = h; }
