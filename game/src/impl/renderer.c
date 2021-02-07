#include "../headers/renderer.h"

void clear(Renderer* renderer)
{
    SDL_RenderClear(renderer->mRenderer);
}

void draw(Renderer* renderer)
{
    SDL_RenderPresent(renderer->mRenderer);
}

void destroy(Renderer* renderer) 
{
    SDL_DestroyRenderer(renderer->mRenderer);
}
