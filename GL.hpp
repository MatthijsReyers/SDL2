#pragma once

#include <SDL2/SDL.h>
#include "video.hpp"

namespace SDL
{
    namespace GL
    {

        class Context
        {
        private:
            SDL_GLContext ctx;
            
        public:
            Context(SDL_GLContext ctx);
            ~Context();
        };
        
        static auto& setSwapInterval = SDL_GL_SetSwapInterval;
    }
} 
