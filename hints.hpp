#pragma once

#include <sstream>
#include <SDL2/SDL.h>

namespace SDL
{
    namespace Hints
    {
        static inline bool setAccelerometerAsJoystick(bool bypass)
        {
            return SDL_SetHint(
                SDL_HINT_ACCELEROMETER_AS_JOYSTICK,
                bypass ? "1" : "0");
        }

        static inline bool setAndroidAPKexpansionMainFileVersion(int version)
        {
            std::stringstream ss;
            ss << version;
            return SDL_SetHint(
                SDL_HINT_ANDROID_APK_EXPANSION_MAIN_FILE_VERSION,
                ss.str().c_str());
        }

        static inline bool setAndroidAPKexpansionPatchFileVersion(int version)
        {
            std::stringstream ss;
            ss << version;
            return SDL_SetHint(
                SDL_HINT_ANDROID_APK_EXPANSION_PATCH_FILE_VERSION,
                ss.str().c_str());
        }
        
        static inline bool setAndroidSeparateMouseAndTouch(bool separate)
        {
            return SDL_SetHint(
                "SDL_ANDROID_SEPARATE_MOUSE_AND_TOUCH",
                separate ? "1" : "0");
        }

        static inline bool setAppleTVcontrollerUIevents(bool apple)
        {
            return SDL_SetHint(
                SDL_HINT_APPLE_TV_CONTROLLER_UI_EVENTS,
                apple ? "1" : "0");
        }

        static inline bool setBypassCompositorX11(bool bypass)
        {
            return SDL_SetHint(
                SDL_HINT_VIDEO_X11_NET_WM_BYPASS_COMPOSITOR,
                bypass ? "1" : "0");
        }
    }
} 
