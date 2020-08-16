#pragma once

#include <SDL2/SDL_events.h>

namespace SDL
{
    using Event = SDL_Event;

    Event pollEvent()
    {
        SDL_Event e;
        SDL_PollEvent(&e);
        return e;
    }
} 
