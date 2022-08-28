#pragma once

#include "../Ball/Ball.hpp"
#include "../Window/Window.hpp"
#include <memory>
#include <vector>

class Engine {
	private:
		std::vector<std::unique_ptr<Object>> objects;
		Window window;
	public:
		Engine(size_t w, size_t h);
		~Engine();
		void Draw();
};
