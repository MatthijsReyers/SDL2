#pragma once

#include <SDL2/SDL_events.h>
#include <iostream>

namespace SDL
{
    using Event = SDL_Event;

    static inline Event pollEvent()
    {
        SDL_Event e;
        SDL_PollEvent(&e);
        return e;
    }
} 
