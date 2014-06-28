/*
 * Game.h
 *
 *  Created on: Jun 28, 2014
 *      Author: steven
 */

#ifndef GAME_H_
#define GAME_H_
#include "SDL2/SDL.h"
#include "string"
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int SCREEN_BPP = 32;


class Game {
public:

	SDL_Window *createWindow(std::string);
	SDL_Surface *getSurface(SDL_Window*);
	SDL_Surface *loadBitMap(std::string filename);
	void destroySurface(SDL_Surface*);
	bool init();
	bool start();
	void close(SDL_Window*);

	Game();
	void sayHello();
	virtual ~Game();

};

#endif /* GAME_H_ */
