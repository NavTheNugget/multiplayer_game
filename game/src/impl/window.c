#include "../headers/window.h"

void destroyWindow(Window* window) 
{
    SDL_DestroyWindow(window->mWindow);
}
