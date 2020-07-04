#pragma once
// Gun.h
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the gun class, the gun [|87.

#include <iostream>
#include <SDL.h>

class Gun: public Object {

private:
	int ammo;
	int durability;
	int shooting_speed;
	double accuracy;
	int durability;
	double recoil;

public:
	Gun();
	~Gun();

	int get_ammo();
	int get_durability();
	int get_shooting_speed();
	double get_accuracy();
	int get_durability();
	double get_recoil();



	void set_ammo(int new_ammo);
	void set_durability(int new_durability);
	void set_shooting_speed(int new_shoothing_speed);
	void set_accuracy(int new_accuracy);
	void set_durability(int new_durability);
	void set_recoil(int new_recoil);
};
