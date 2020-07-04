#pragma once
// Object.cpp
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the bullet class, bullet is here :).

#include <iostream>
#include <SDL.h>


class Bullet : public Object{

private:
	int damage;
	int acceleration;


public:
	Bullet();
	~Bullet();

	int get_acceleration();
	int get_damage();

	void set_acceleration(int new_x);
	void set_damage(int new_y);

};