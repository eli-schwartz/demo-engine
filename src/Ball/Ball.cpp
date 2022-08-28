#include "Ball.hpp"
#include <cmath>
#include <utility>

Ball::Ball(glm::vec2 && pos, int r):
Object(std::move( pos )),
radius(r)
{
}

Ball::~Ball()
{
}

void Ball::Draw(SDL_Renderer* r) const{
	constexpr double di = 0.001f;
	SDL_SetRenderDrawColor(r, 255, 255, 255, 0);
	for(double i=0.f; i < 2* 3.14159265f; i+= di){
		SDL_RenderDrawLine(r, this->pos.x,
				this->pos.y,
				this->pos.x + this->radius* cos(i),
				this->pos.y + this->radius * sin(i));
	}
	SDL_SetRenderDrawColor(r, 0, 0, 0, 0);
}
