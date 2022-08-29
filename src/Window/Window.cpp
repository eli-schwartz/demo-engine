#include "Window.hpp"
#include <SDL2/SDL_video.h>

Window::Window(std::string&& name, int w, int h):
window( SDL_CreateWindow(name.c_str(),
			SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED,
			w, h,
			0)),
renderer( SDL_CreateRenderer(this->window,
			-1,
			SDL_RENDERER_ACCELERATED))
{
	SDL_Init(SDL_INIT_VIDEO);
}

Window::~Window(){
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
}

void Window::Draw() const{
	SDL_RenderPresent(this->renderer);
}

void Window::DrawObject(const std::shared_ptr<Object>& o) const{
	o->Draw(this->renderer);
}

void Window::Clear(){
	SDL_SetRenderDrawColor(this->renderer, 0, 0, 0, 0);
	SDL_RenderClear(this->renderer);
}
