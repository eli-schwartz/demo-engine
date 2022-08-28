#include "Engine/Engine.hpp"
#include "Ball/Ball.hpp"

int main(){
	auto e = std::make_unique<Engine>(800, 600);
	auto c = std::make_shared<Ball>(glm::vec2(400, 300), 10);
	e->PushObject(c);
	for(int i=0; i<10; i++){
		e->Draw();
		c->Move(glm::vec2(10,0));
		SDL_Delay(100);
	}
}
