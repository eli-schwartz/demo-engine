#include "Object.hpp"

Object::Object(glm::vec2&& p):
pos(p){
	txt = nullptr;
}

Object::~Object(){
    if(txt) SDL_DestroyTexture(txt);
}

void Object::Move(glm::vec2 && v){
	this->pos += v;
}

void Object::SetPosition(glm::vec2 && v){
	this->pos = v;
}
