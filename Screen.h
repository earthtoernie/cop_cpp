# include <SDL2/SDL.h>

#ifndef SCREEN_H_
#define SCREEN_H_
class Screen{
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;
    SDL_Window *window;
public:
    Screen();
    bool init();
};
#endif