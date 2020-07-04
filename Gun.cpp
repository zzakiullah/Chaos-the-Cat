// Gun.cpp
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the gun class, the gun [|87.

#include "Gun.h"

Gun::Gun() {
	Gun::ammo = 0;
	Gun::durability = 0;
	Gun::shooting_speed = 0;
	Gun::accuracy = 0;
	Gun::recoil = 0;
}

Gun::~Gun() {}

int Gun::get_ammo() { return Gun::ammo; }
int Gun::get_durability() { return Gun::durability; }
int Gun::get_shooting_speed() { return Gun::shooting_speed; }
double Gun::get_accuracy() { return Gun::accuracy; }
double Gun::get_recoil() { return Gun::recoil; }

void Gun::set_ammo(int ammo) { Gun::ammo = ammo; }
void Gun::set_durability(int durability) { Gun::durability = durability; }
void Gun::set_shooting_speed(int shooting_speed) { Gun::shooting_speed = shooting_speed; }
void Gun::set_accuracy(double accuracy) { Gun::accuracy = accuracy; }
void Gun::set_recoil(double recoil) { Gun::recoil = recoil; }
