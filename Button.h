#pragma once
// Button.h
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the button class

#include <iostream>
#include <SDL.h>
#include "Object.h"

class Button : public Object{

private:

	// Top left position
	SDL_Point position;

	// Define enum ButtonSprite class
	enum ButtonSprite {
		BUTTON_SPRITE_MOUSE_OUT = 0,
		BUTTON_SPRITE_MOUSE_OVER_MOTION = 1,
		BUTTON_SPRITE_MOUSE_DOWN = 2,
		BUTTON_SPRITE_MOUSE_UP = 3,
		BUTTON_SPRITE_TOTAL = 4
	};

	// Currently used sprite
	ButtonSprite currentSprite;

	// Button constants
	const int BUTTON_WIDTH = 300;
	const int BUTTON_HEIGHT = 200;
	const int TOTAL_BUTTONS = 4;

public:

	// Constructor and destructor
	Button();
	~Button();

	// Sets the top left position of the button
	void setPosition(int x, int y);

	// Gets the top left position of the button
	int getPosition();

	// Handles mouse event
	void handleEvent(SDL_Event* e);

};
