#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL2/SDL.h>

typedef struct {
    SDL_Window* mWindow;
} Window;

void destroyWindow(Window* window);