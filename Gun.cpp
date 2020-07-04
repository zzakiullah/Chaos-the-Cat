// Gun.cpp
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the gun class, the gun [|87.

#include "gun.h"

Gun::Gun() {
	Gun::ammo = 0;
	Gun::durability = 0;
	Gun::shooting_speed = 0;
	Gun::accuracy = 0;
	Gun::durability = 0;
	Gun::recoil = 0;
}

Gun::~Gun() {}

int Gun::get_ammo() { return Gun::ammo; }
int Gun::get_durability() { return Gun::durability; }
int Gun::get_shooting_speed() { return Gun::shooting_speed; }
double Gun::get_accuracy() { return Gun::accuracy; }
int Gun::get_durability() { return Gun::durability; }
double Gun::get_recoil() { return Gun::recoil; }

void Gun::set_ammo(int new_ammo) { Gun::ammo = ammo; }
void Gun::set_durability(int new_durability) { Gun::durability = durability; }
void Gun::set_shooting_speed(int shooting_speed) { Gun::shooting_speed = shooting_speed; }
void Gun::set_accuracy(int accuracy) { Gun::accuracy = accuracy; }
void Gun::set_durability(int durability) { Gun::durability = durability; }
void Gun::set_recoil(int recoil) { Gun::recoil = recoil; }
