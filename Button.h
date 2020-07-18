#pragma once
// Button.h
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the button class

#include <iostream>
#include <SDL.h>
#include "Object.h"

class Button : public Object{

private:

	enum class ButtonSprite {					// Defines the state of the button relative to the mouse.
		BUTTON_SPRITE_MOUSE_OUT = 0,
		BUTTON_SPRITE_MOUSE_OVER_MOTION = 1,
		BUTTON_SPRITE_MOUSE_DOWN = 2,
		BUTTON_SPRITE_MOUSE_UP = 3,
		BUTTON_SPRITE_TOTAL = 4
	};

	ButtonSprite current_sprite;				// Current sprite used. 

public:

	Button(int w, int h);
	~Button();

	// Handles mouse event
	void handle_event(SDL_Event* e);

};
