// Object.cpp
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the bullet class, bullet is here :).

#include "bullet.h"

Bullet::Bullet() {
	Bullet::acceleration = 0;
	Bullet::damage = 0;
	
}

Bullet::~Bullet() {}

int Bullet::get_acceleration() { return Bullet::acceleration; }
int Bullet::get_damage() { return Bullet::damage; }


void Bullet::set_acceleration(int new_acceleration) { Bullet::acceleration = new_acceleration; }
void Bullet::set_damage(int new_damage) { Bullet::damage = new_damage; }
