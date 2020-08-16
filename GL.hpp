#pragma once

#include <SDL2/SDL.h>

namespace SDL
{
    namespace GL
    {
        void setSwapInterval(int interval)
        {
            SDL_GL_SetSwapInterval(1);
        }
    }
} 
