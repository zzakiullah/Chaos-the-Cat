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
	double recoil;

public:
	Gun();
	~Gun();

	int get_ammo();
	int get_durability();
	int get_shooting_speed();
	double get_accuracy();
	double get_recoil();



	void set_ammo(int ammo);
	void set_durability(int durability);
	void set_shooting_speed(int shoothing_speed);
	void set_accuracy(double accuracy);
	void set_recoil (double recoil);
};
