#pragma once

#include "../Object/Object.hpp"

class Ball: public Object {
	private:
		int radius;
	public:
		Ball(glm::vec2&& pos, int radius);
		~Ball();
		virtual void Draw(SDL_Renderer* r) const override;
};
