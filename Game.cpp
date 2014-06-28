/*
 * Game.cpp
 *
 *  Created on: Jun 28, 2014
 *      Author: steven
 */

#include "Game.h"
#include "stdio.h"
#include "SDL2/SDL.h"

Game::Game() {

   sayHello();
}

Game::~Game() {
	printf("Terminated!");

}

void Game::sayHello(){

  printf("Hello here!");

}

bool Game::init(){

   if(!SDL_Init(SDL_INIT_EVERYTHING)){ return true;}
   return false;

}

bool start(){

	return false;

}

SDL_Window *Game::createWindow(std::string title){

	return SDL_CreateWindow(title.c_str(),SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,SCREEN_WIDTH,SCREEN_HEIGHT,SDL_WINDOW_SHOWN);
}

SDL_Surface *Game::getSurface(SDL_Window* window){
    SDL_Surface* surface = SDL_GetWindowSurface( window );
   return surface;

}

void Game::close(SDL_Window* window){

  //Destroy window
  SDL_DestroyWindow( window );

  //Quit SDL subsystems
  SDL_Quit();

}

SDL_Surface *Game::loadBitMap(std::string filename){
	filename = filename+".bmp";
    SDL_Surface* image = SDL_LoadBMP(filename.c_str());
	return image;

}

void Game::destroySurface(SDL_Surface* surface){

	SDL_FreeSurface(surface);
}

