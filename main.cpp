# include <iostream>
# include <SDL2/SDL.h>

using namespace std;

int main(){
    // cout << "hello world" << endl;
    // if(SDL_Init(SDL_INIT_VIDEO) < 0){
    //     cout << "error" << endl;
    // }

    // cout << "SDL Init succeeded." << endl;

    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;

    SDL_Window *window = SDL_CreateWindow("Particle Fire Expolosion",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

    if(window == NULL){
        cout << SDL_GetError() << endl;
        SDL_Quit();
        return 2;
    }

    bool quit = false;

    SDL_Event event;
    while(!quit){
        // Update particles
        // Draw particles
        // CHeck for messages/events
        while(SDL_PollEvent(&event)){
            if(event.type == SDL_QUIT){
                quit = true;
            }

        }

    }

    SDL_DestroyWindow(window);

    SDL_Quit();
}