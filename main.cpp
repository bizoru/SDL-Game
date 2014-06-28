
#include <SDL2/SDL.h>
#include "stdlib.h"
#include "string"
#include "Game.h"
#include "types.h"

int main(int argc,char* args []){


    Game* game = new Game();

    Window* window = NULL;
    Surface* screensurface = NULL;
    Surface* img = NULL;

    if(game->init()){

        
        window =  game->createWindow("SDL 2.0 Running !!");
        screensurface = game->getSurface( window );
        img = game->loadBitMap("image");
  

        if (img != NULL){
        	SDL_BlitSurface( img, NULL, screensurface, NULL );
        }
            
        //Update the surface
        SDL_UpdateWindowSurface( window );

        //Wait two seconds
        SDL_Delay( 2000 );

        game->destroySurface(img);
        game->close(window);


        return 0;


    }


}

