// Button.h
// Sheng Fang, Rabiya Majeed, & Zulaikha Zakiullah
// This instantiates the button class

#include "Button.h"

Button::Button() {
	current_sprite = ButtonSprite::BUTTON_SPRITE_MOUSE_OUT;
}

Button::~Button() {}

void Button::handle_event(SDL_Event* e) {

	// If a mouse event happens
	if (e->type == SDL_MOUSEMOTION || e->type == SDL_MOUSEBUTTONDOWN || e->type == SDL_MOUSEBUTTONUP) {

		// Get the mouse coordinates
		int mouse_x, mouse_y;
		SDL_GetMouseState(&mouse_x, &mouse_y);

		// Checks if the mouse is in the button
		bool inside = true;

		// Checks if the mouse is outside the button boundries
		// Mouse is either left, right, above, or below button 
		if (mouse_x < get_x() || mouse_x > get_x() + get_width() || mouse_y < get_y() || mouse_y > get_y() + get_height()) {
			inside = false;
		}

		// Mouse is outside the button
		if (!inside) {
			current_sprite = ButtonSprite::BUTTON_SPRITE_MOUSE_OUT;
		}

		// If the mouse is inside the button, run through these cases
		else {
			// Set mouse over sprite
			switch (e->type) {
			case SDL_MOUSEMOTION:
				current_sprite = ButtonSprite::BUTTON_SPRITE_MOUSE_OVER_MOTION;
				break;

			case SDL_MOUSEBUTTONDOWN:
				current_sprite = ButtonSprite::BUTTON_SPRITE_MOUSE_DOWN;
				break;

			case SDL_MOUSEBUTTONUP:
				current_sprite = ButtonSprite::BUTTON_SPRITE_MOUSE_UP;
				break;
			}
		}
	}
}

