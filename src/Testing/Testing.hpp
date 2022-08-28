#pragma once

#include "../Engine/Engine.hpp"
#include "../Ball/Ball.hpp"
#include "../Object/Object.hpp"
#include "../Window/Window.hpp"
#include "../Boundary/Boundary.hpp"

class Testing {
// objects
	Window window;
	Engine engine;
	Ball ball;
	Boundary boundary;

// tests
	void test_window();
	public:
		Testing();
		~Testing();

};
