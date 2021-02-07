#include "../headers/square.h"

Square* initSquare(int w, int h, int x, int y, SDL_Color color) 
{
    Square* square = malloc(sizeof(Square));
    square->mColor = color;
    square->w = w;
    square->h = h;
    square->x = x;
    square->y = y;
    return square;
}

void drawSquare(Square* square, Renderer* renderer) 
{
    SDL_SetRenderDrawColor(renderer->mRenderer, 255, 255, 255, 255);
    SDL_Rect position = { square->x, square->y, square->w, square->h };
    SDL_RenderFillRect(renderer->mRenderer, &position);
    SDL_SetRenderDrawColor(renderer->mRenderer, 0, 0, 0, 0);
}
