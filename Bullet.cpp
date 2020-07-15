// Bullet.cpp
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the bullet class, bullet is here :).

#include "Bullet.h"

Bullet::Bullet() {
	acceleration = 0;
	damage = 0;
	
}

Bullet::~Bullet() {}

int Bullet::get_acceleration() { return acceleration; }
int Bullet::get_damage() { return damage; }


void Bullet::set_acceleration(int a) { acceleration = a; }
void Bullet::set_damage(int d) { damage = d; }
