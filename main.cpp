#include "SDL.h"

int main(int argc, char* argv[]) {
	
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window *window = SDL_CreateWindow("RE_window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1,0);


	Uint8 r = 0;
	Uint8 g = 255;
	Uint8 b = 0;
	Uint8 a = 255;

	SDL_SetRenderDrawColor(renderer, r, g, b, a);

	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);

	SDL_Delay(3000);

	return	0;
}