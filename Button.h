#pragma once
// Button.h
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the button class

#include <iostream>
#include <SDL.h>
#include "Object.h"

class Button : public Object{

private:

	int width;
	int height;

	SDL_Point position;							// Top left coordinate of the button.

	enum class ButtonSprite {					// Defines the state of the button relative to the mouse.
		BUTTON_SPRITE_MOUSE_OUT = 0,
		BUTTON_SPRITE_MOUSE_OVER_MOTION = 1,
		BUTTON_SPRITE_MOUSE_DOWN = 2,
		BUTTON_SPRITE_MOUSE_UP = 3,
		BUTTON_SPRITE_TOTAL = 4
	};

	ButtonSprite currentSprite;					// Current sprite used. 

public:

	Button(int w, int h);
	~Button();

	// Sets the top left position of the button.
	void setPosition(int x, int y);							
	void setWidth(int w);
	void setHeight(int h);
	
	// Gets the top left position of the button.
	int getPosition();											
	int getWidth();
	int getHeight();

	// Handles mouse event
	void handleEvent(SDL_Event* e);

};
