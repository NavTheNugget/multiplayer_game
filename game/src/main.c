#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL2/SDL.h>

#include "headers/renderer.h"
#include "headers/window.h"
#include "headers/square.h"
#include "headers/keyboard.h"

int main() 
{
    SDL_Color white = { 255, 255, 255, 255 };
    Window* window = malloc(sizeof(Window));
    Renderer* renderer = malloc(sizeof(Renderer));
    Square* player = initSquare(32, 32, 100, 100, white);
    Keyboard* keyboard = malloc(sizeof(Keyboard));

    window->mWindow = SDL_CreateWindow("Unnamed Project: Open Source", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
    renderer->mRenderer = SDL_CreateRenderer(window->mWindow, -1, 0);
    bool isRunning = true;

    while (isRunning) 
    {
        SDL_PollEvent(&keyboard->mEvent);
        switch(keyboard->mEvent.type) 
        {
            case SDL_QUIT:
                isRunning = false;
                break;
            default: 
                break;
        }
        if (isKeyPressed(keyboard, SDL_SCANCODE_ESCAPE)) 
        {
            isRunning = false;
        }

        clear(renderer);
        drawSquare(player, renderer);
        draw(renderer);
    }
    destroyWindow(window);
    destroy(renderer);
    SDL_Quit();

    free(window);
    free(renderer);
    free(keyboard);
    free(player);
    return 0;
}
