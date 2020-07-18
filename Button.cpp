// Button.h
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the button class

#include "Button.h"

Button::Button(int w, int h) {

	width = w;
	height = h;

	position.x = 0;
	position.y = 0;

	currentSprite = ButtonSprite::BUTTON_SPRITE_MOUSE_OUT;
}

Button::~Button() {}

// Setters

void Button::setPosition(int x, int y) {
	position.x = x;
	position.y = y;
}

void Button::setWidth(int w) {
	width = w;
}

void Button::setHeight(int h) {
	height = h;
}

// Getters 

int Button::getPosition() {
	return position.x, position.y; 
}

int Button::getWidth() {
	return width;
}

int Button::getHeight() {
	return height;
}

void Button::handleEvent(SDL_Event* e) {

	// If a mouse event happens
	if (e->type == SDL_MOUSEMOTION || e->type == SDL_MOUSEBUTTONDOWN || e->type == SDL_MOUSEBUTTONUP) {

		// Get the mouse position
		int x, y;
		SDL_GetMouseState(&x, &y);

		// Checks if the mouse is in the button
		bool inside = true;

		// Checks if the mouse is outside the button boundries
		// Mouse is either left, right, above, or below button 
		if (x < position.x || x > position.x + width || y < position.y || y > position.y + height) {
			inside = false;
		}

		// Mouse is outside the button
		if (!inside) {
			currentSprite = ButtonSprite::BUTTON_SPRITE_MOUSE_OUT;
		}

		// If the mouse is inside the button, run through these cases
		else {
			// Set mouse over sprite
			switch (e->type) {
			case SDL_MOUSEMOTION:
				currentSprite = ButtonSprite::BUTTON_SPRITE_MOUSE_OVER_MOTION;
				break;

			case SDL_MOUSEBUTTONDOWN:
				currentSprite = ButtonSprite::BUTTON_SPRITE_MOUSE_DOWN;
				break;

			case SDL_MOUSEBUTTONUP:
				currentSprite = ButtonSprite::BUTTON_SPRITE_MOUSE_UP;
				break;
			}
		}
	}
}

