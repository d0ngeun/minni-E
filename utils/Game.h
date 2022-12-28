#ifndef GAME_H
#define GAME_H

#include "../common/common_headers.h"
#include "../entity/Player.h"
#include <iostream>
#include <string>

class Game {
    public:
        Game();
        ~Game();
        bool init(const char* title, int x, int y, int width, int height, int flags);
 
        void update();
        void handleEvents();
        void render();
        void clean();
        void quit();

        bool isRunning() { return running; }
        SDL_Renderer* getRenderer() const { return renderer; }
        SDL_Window* getWindow() const { return window; }

    private:
        SDL_Window* window;
        SDL_Renderer* renderer;
    
        bool running;
        int windowFlags;
};

#endif