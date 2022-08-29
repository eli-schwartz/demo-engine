#include "Engine/Engine.hpp"
#include "Ball/Ball.hpp"
#include <SDL2/SDL_events.h>

int main(){
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
        return 1;
    }
    atexit(SDL_Quit);

	auto e = Engine(800, 600);
	auto c = std::make_shared<Ball>(glm::vec2(400, 300), 10);
	e.PushObject(c);
	for(int i=0; i<10; i++){
		e.Draw();
		c->Move(glm::vec2(10,-20));
		SDL_Delay(100);
	}
}
