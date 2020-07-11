// Gun.cpp
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the gun class, the gun [|87.

#include "Gun.h"

Gun::Gun() {
	ammo = 0;
	durability = 0;
	shooting_speed = 0;
	accuracy = 0;
	recoil = 0;
}

Gun::~Gun() {}

int Gun::get_ammo() { return ammo; }
int Gun::get_durability() { return durability; }
int Gun::get_shooting_speed() { return shooting_speed; }
double Gun::get_accuracy() { return accuracy; }
double Gun::get_recoil() { return recoil; }

void Gun::set_ammo(int am) { ammo = am; }
void Gun::set_durability(int d) { durability = d; }
void Gun::set_shooting_speed(int ss) { shooting_speed = ss; }
void Gun::set_accuracy(double ac) { accuracy = ac; }
void Gun::set_recoil(double r) { recoil = r; }
