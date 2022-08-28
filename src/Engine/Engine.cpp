#include "Engine.hpp"

Engine::Engine(size_t w, size_t h):
	window("name", w, h)
{
}

Engine::~Engine(){
}

void Engine::Draw(){
	for(const auto& o : this->objects){
		this->window.DrawObject(o);
	}
}
