#include "../headers/keyboard.h"

void registerEvent(Keyboard* keyboard, SDL_Event event)
{
    keyboard->mEvent = event;
}

bool isKeyPressed(Keyboard* keyboard, SDL_Scancode key)
{
    const Uint8* keyboardState = SDL_GetKeyboardState(0);
    if (keyboardState)
    {
        if (keyboardState[key]) {
            return true;
        }
    }
    return false;
}
