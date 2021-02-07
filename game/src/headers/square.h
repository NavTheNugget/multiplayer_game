#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../headers/renderer.h"

typedef struct {
    int w, h, x, y;
    SDL_Color mColor;
} Square;

Square* initSquare(int w, int h, int x, int y, SDL_Color color);
void drawSquare(Square* square, Renderer* renderer);
