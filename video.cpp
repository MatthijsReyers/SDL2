#include "video.hpp"
#include <iostream>

namespace SDL
{
    Renderer::Renderer(SDL_Renderer* r) : ren(r) {}

    Renderer::~Renderer()
    {
        SDL_DestroyRenderer(this->ren);
    }

    Renderer& Renderer::setDrawColor(Uint8 r, Uint8 g, Uint8 b, Uint8 a)
    {
        SDL_SetRenderDrawColor(this->ren, r, g, b, a);
        return *this;
    }

    Renderer& Renderer::drawLine(int x1, int y1, int x2, int y2)
    {
        SDL_RenderDrawLine(this->ren, x1, y1, x2, y2);
        return *this;
    }

    Renderer& Renderer::clear()
    {
        SDL_RenderClear(this->ren);
        return *this;
    }

    Renderer& Renderer::present()
    {
        SDL_RenderPresent(this->ren);
        return *this;
    }

    Window::Window(const char* title, Uint32 flags)
    {
        this->win = SDL_CreateWindow(
            title, 
            SDL_WINDOWPOS_CENTERED, 
            SDL_WINDOWPOS_CENTERED, 
            720, 420, flags);
    }

    Window::Window(const char* title, int width, int height, Uint32 flags)
    {
        this->win = SDL_CreateWindow(
            title, 
            SDL_WINDOWPOS_CENTERED, 
            SDL_WINDOWPOS_CENTERED, 
            width, height, 
            flags);
    }

    Window::Window(const char* title, int x, int y, int width, int height, Uint32 flags)
    {
        this->win = SDL_CreateWindow(title, x, y, width, height, flags);
    }
    
    Window::~Window()
    {
        SDL_DestroyWindow(this->win);
    }
    
    Renderer Window::createRenderer(int index, Uint32 flags)
    {
        SDL_Renderer* ren = SDL_CreateRenderer(this->win, index, flags);
        return Renderer(ren);
    }

    GL::Context Window::createContext()
    {
        SDL_GLContext ctx = SDL_GL_CreateContext(this->win);
        return GL::Context(ctx);
    }

    SDL_Window* Window::escape()
    {
        return this->win;
    }
}
