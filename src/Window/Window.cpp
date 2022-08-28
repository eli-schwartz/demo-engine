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
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
}

void Window::Draw() const{
	SDL_RenderPresent(this->renderer);
}

void Window::DrawObject(const std::unique_ptr<Object>& o) const{
	o->Draw(this->renderer);
}
