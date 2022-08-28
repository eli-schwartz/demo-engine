#pragma once

#include "../Ball/Ball.hpp"
#include "../Window/Window.hpp"
#include <memory>
#include <vector>

class Engine {
	private:
		std::vector<std::shared_ptr<Object>> objects;
		Window window;
	public:
		Engine(size_t w, size_t h);
		~Engine();
		void Draw();
		void PushObject(const std::shared_ptr<Object>& o);
};
