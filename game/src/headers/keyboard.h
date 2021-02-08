#pragma once
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

typedef struct {
    SDL_Event mEvent;
} Keyboard;

void registerEvent(Keyboard* keyboard, SDL_Event event);
bool isKeyPressed(Keyboard* keyboard, SDL_Scancode key);
