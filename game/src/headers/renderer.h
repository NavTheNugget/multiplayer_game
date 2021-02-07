#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

typedef struct {
    SDL_Renderer* mRenderer;
} Renderer;

void clear(Renderer* renderer);
void draw(Renderer* renderer);
void destroy(Renderer* renderer);
