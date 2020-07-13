// Main.cpp
// Sheng Fang, Rabiya Majeed, Zulaikha Zakiullah
// This program instantiates the window and calls the Game class to play it.

#include <iostream>
#include <SDL.h>

// Function Declarations

// Starts up SDL and creates window
bool init();

// Loads Media
bool loadMedia();

// Frees media and shuts down SDL
void close();

// Main function
int main(int argc, char** args);

// Pointers to our window and surface 
SDL_Surface* gWinSurface = NULL;	// The surface contained by the window
SDL_Window* gWindow = NULL;			// The window we'll be rendering to
SDL_Surface* gHelloWorld = NULL;	// the image we will load and show on screen

// SDL initialization and window creation
bool init() {

	// Initalization flag
	bool success = true;

	// Initalize SDL
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		std::cout << "Error initalizing SDL: " << SDL_GetError() << std::endl;
		success = false;
	}

	else {

		// Create window to render to
		// Changed from: 1280, 720
		gWindow = SDL_CreateWindow("Example", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);

		// Make sure creating the window succeeded
		if (gWindow == NULL) {
			std::cout << "Error creating window: " << SDL_GetError() << std::endl;
			success = false;
		}
		else {

			// Get the surface from the window so we can draw to it
			gWinSurface = SDL_GetWindowSurface(gWindow);

			// Make sure getting the surface succeeded
			if (gWinSurface == NULL) {
				std::cout << "Error getting surface: " << SDL_GetError() << std::endl;
				success = false;
			}
		}
	}
	return success;
}

bool loadMedia() {

	// Loading success flag
	bool success = true;

	// Load splash image
	gHelloWorld = SDL_LoadBMP("images/hello_world.bmp");
	if (gHelloWorld == NULL) {
		std::cout << "Error loading image: " << SDL_GetError() << std::endl;
		success = false;
	}

	return success;
}

void close() {

	// Deallocate surface
	SDL_FreeSurface(gHelloWorld);
	gHelloWorld = NULL;

	// Destroy window
	SDL_DestroyWindow(gWindow);		// also takes care of the screen surface
	gWindow = NULL;

	// Deallocate surface; but just to be safe
	SDL_FreeSurface(gWinSurface);
	gWinSurface = NULL;

	// Quit SDl Subsystems
	SDL_Quit();

}

/*
Arguments of the main function must be an int and a char* array; return type must be int
Any other type of main function will cause an undefined reference to main.
SDL requires this type of main so it is compatible with multiple platforms.
*/

// You must include the command line parameters for your main function to be recognized by SDL
int main(int argc, char** args) {

	// Start up SDL and create window
	if (!init()) {
		std::cout << "Failed to initalize! " << std::endl;
	}

	else {

		// Main loop flag
		bool quit = false;

		// Event handler
		// An SDL event is something like a key press, mouse motion, joy button press, etc
		SDL_Event e;

		// While the application is running
		while (!quit) {

			// Handle events in queue; keep processing the event queue until it is empty
			// When queue is empty, SDL_PollEvent will return 0
			while (SDL_PollEvent(&e) != 0) {
				// User requests to quit
				if (e.type == SDL_QUIT) {
					quit = true;
				}
			}

			// Fill the window with a white rectangle
			SDL_FillRect(gWinSurface, NULL, SDL_MapRGB(gWinSurface->format, 255, 255, 255));

			// Update the surface so it shows everything you draw to it
			SDL_UpdateWindowSurface(gWindow);

		}
	}

	// Free resources and close SDL
	close();

	// End the program
	return 0;

}
