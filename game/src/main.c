#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL2/SDL.h>

main() {
    SDL_Window* window = SDL_CreateWindow("My Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
    bool isRunning = true;
    SDL_Event event;

    while (isRunning) {
        SDL_PollEvent(&event);
        switch(event.type) {
            case SDL_QUIT:
                isRunning = false;
                break;
            default: 
                break;
        }

        SDL_RenderClear(renderer);

        SDL_RenderPresent(renderer);
    }
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    return 0;
}