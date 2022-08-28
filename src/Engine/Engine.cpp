#include "Engine.hpp"

Engine::Engine(size_t w, size_t h):
	window("name", w, h)
{
}

Engine::~Engine(){
}

void Engine::Draw(){
	this->window.Clear();
	for(const auto& o : this->objects){
		this->window.DrawObject(o);
	}
	this->window.Draw();
}

void Engine::PushObject(const std::shared_ptr<Object>& o){
	this->objects.push_back(o);
}
