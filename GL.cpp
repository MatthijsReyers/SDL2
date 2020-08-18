#include "GL.hpp"

namespace SDL
{
    namespace GL
    {
        Context::Context(SDL_GLContext c) : ctx(c)
        {
        }

        Context::~Context()
        {
            SDL_GL_DeleteContext(this->ctx);
        }
    }
}