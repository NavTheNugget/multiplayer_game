#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL2/SDL.h>
#include "headers/renderer.h"
#include "headers/window.h"
#include "headers/square.h"

int main() {
    Window* window = malloc(sizeof(Window));
    Renderer* renderer = malloc(sizeof(Renderer));
    SDL_Color white = { 255, 255, 255, 255 };
    Square* player = initSquare(32, 32, 100, 100, white);

    window->mWindow = SDL_CreateWindow("My Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
    renderer->mRenderer = SDL_CreateRenderer(window->mWindow, -1, 0);
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

        clear(renderer);
        drawSquare(player, renderer);
        draw(renderer);
    }
    destroyWindow(window);
    destroy(renderer);
    SDL_Quit();
    return 0;
}
