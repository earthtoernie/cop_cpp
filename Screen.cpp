# include "Screen.h"



Screen::Screen(){
        SDL_Window this->*m_window = SDL_CreateWindow("Particle Fire Expolosion",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, Screen::SCREEN_WIDTH, Screen::SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

}
bool Screen::init(){

    m_window = NULL;
    
    return false;
}