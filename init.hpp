#pragma once

#include <SDL2/SDL.h>

namespace SDL
{
    static inline auto& init = SDL_Init;
    static inline auto& quit = SDL_Quit;

    enum InitFlags
    {
        TIMER = SDL_INIT_TIMER,
        AUDIO = SDL_INIT_AUDIO,
        VIDEO = SDL_INIT_VIDEO,
        JOYSTICK = SDL_INIT_JOYSTICK,
        HAPTIC = SDL_INIT_HAPTIC,
        GAMECONTROLLER = SDL_INIT_GAMECONTROLLER,
        EVENTS = SDL_INIT_EVENTS,
        EVERYTHING = SDL_INIT_EVERYTHING,
        NOPARACHUTE = SDL_INIT_NOPARACHUTE
    };
} 
