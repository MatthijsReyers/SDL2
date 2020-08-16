#pragma once

#include <SDL2/SDL_hints.h>

namespace SDL
{
    namespace Hints
    {
        bool setBypassCompositorX11(bool bypass)
        {
            return SDL_SetHint(
                SDL_HINT_VIDEO_X11_NET_WM_BYPASS_COMPOSITOR,
                bypass ? "1" : "0");
        }
    }
} 
