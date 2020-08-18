#pragma once

#include <SDL2/SDL_video.h>
#include <SDL2/SDL_render.h>

#include "GL.hpp"

namespace SDL
{
    class Renderer
    {
        private:
            SDL_Renderer* ren;
            
        public:
            Renderer(SDL_Renderer* r);
            ~Renderer();

            Renderer& setDrawColor(Uint8 r, Uint8 g, Uint8 b, Uint8 a=255);

            Renderer& drawLine(int x1, int y1, int x2, int y2);

            Renderer& clear();
            Renderer& present();
    };

    class Window
    {
        private:
            SDL_Window* win;

        public:
            Window(const char* title, Uint32 flags=SDL_WINDOW_SHOWN);
            Window(const char* title, int width, int height, Uint32 flags=SDL_WINDOW_SHOWN);
            Window(const char* title, int x, int y, int width, int height, Uint32 flags=SDL_WINDOW_SHOWN);

            ~Window();

            Renderer createRenderer(int index=(-1), Uint32 flags=0);
            GL::Context createContext();

            SDL_Window* escape();
    };
}
