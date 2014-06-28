
#include <SDL2/SDL.h>
#include "stdlib.h"
#include "string"


const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int SCREEN_BPP = 32;

bool init();
bool start();
SDL_Window *createWindow(std::string);
SDL_Surface *getSurface(SDL_Window*);

int main(int argc,char* args []){

    
    SDL_Window* window = NULL;
    SDL_Surface* screensurface = NULL;
    

    if(init()){

        
        window =  createWindow("SDL 2.0 Running !!");
        screensurface = getSurface( window );

        //Fill the surface white
        SDL_FillRect(screensurface, NULL, SDL_MapRGB( screensurface->format, 0xFF, 0xFF, 0xFF ) );
            
        //Update the surface
        SDL_UpdateWindowSurface( window );

        //Wait two seconds
        SDL_Delay( 2000 );

        //Destroy window
        SDL_DestroyWindow( window );

        //Quit SDL subsystems
        SDL_Quit();
        return 0;


    }


}

// Handling Window Creation
bool init(){

   if(!SDL_Init(SDL_INIT_EVERYTHING)){ return true;}
   return false;
   
}

bool start(){


}

SDL_Window *createWindow(std::string title){

	return SDL_CreateWindow(title.c_str(),SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,SCREEN_WIDTH,SCREEN_HEIGHT,SDL_WINDOW_SHOWN);
}

SDL_Surface *getSurface(SDL_Window* window){
    SDL_Surface* surface = SDL_GetWindowSurface( window );
   return surface;

}