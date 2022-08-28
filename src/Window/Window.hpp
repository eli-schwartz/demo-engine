#pragma once

#include <SDL2/SDL.h>
#include <memory>
#include "../Object/Object.hpp"
#include <string>
#include "../../subprojects/glm/glm/vec2.hpp"

class Window {
	private:
		SDL_Window* window;
		SDL_Renderer* renderer;
	public:
		Window() = delete;
		Window(std::string && name = "demo",int width=800, int height=600);
		~Window();
		void DrawObject(const std::shared_ptr<Object> &) const;
		void Draw() const;
		void Clear();
		friend class Testing;
};
