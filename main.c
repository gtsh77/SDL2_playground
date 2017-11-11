#include "main.h"

SDL_Window *window;
SDL_Surface *pixmap;

int main(void)
{
	SDL_Rect rstruct;
	SDL_Init(SDL_INIT_VIDEO);
	window = SDL_CreateWindow(
		"Hiho!!",
		0,0,
		WW,WH,
		SDL_WINDOW_SHOWN
	);
	pixmap = SDL_GetWindowSurface(window);

	rstruct.x = 0;
	rstruct.y = 0;
	rstruct.w = WW;
	rstruct.h = WH/2;

	SDL_FillRect(pixmap, &rstruct, SDL_MapRGB(pixmap->format, 125, 125, 125));

	rstruct.x = 0;
	rstruct.y = WH/2;
	rstruct.w = WW;
	rstruct.h = WH/2;

	SDL_FillRect(pixmap, &rstruct, SDL_MapRGB(pixmap->format, 49, 49, 49));

	SDL_UpdateWindowSurface(window);

	SDL_Delay(2000);
	return 0;
}