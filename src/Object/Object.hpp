#pragma once

#include "../../glm/glm/vec2.hpp"
#include <SDL2/SDL.h>
class Object {
	protected:
		glm::vec2 pos;
		SDL_Texture* txt;
		Object(glm::vec2 &&);
	public:
		virtual ~Object();
		virtual void Draw(SDL_Renderer* r) const = 0;
		void Move(glm::vec2 &&);
		void SetPosition(glm::vec2 &&);
};
