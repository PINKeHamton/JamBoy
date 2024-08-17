#include <stdio.h>
#include "../include/SDL2/SDL.h"
#include "../include/SDL2/SDL_video.h"

int main(int argc, char* argv[]) {

    if (SDL_init(SDL_INIT_VIDEO) != 0) {
        printf("JamBoy Failed to Init SDL2");
        return 1;
    }

    SDL_Window *window SDL_CreateWindow();


    return 0;
}
