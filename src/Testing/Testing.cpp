#include "Testing.hpp"
#include <iostream>
#include <cassert>
#include <catch2/catch_amalgamated.hpp>

Testing::Testing():
window("test", 800, 600),
engine(800, 600),
ball(glm::vec2(400, 300), 10),
boundary(){

}

void Passed(){
	std::cout<<"test passed\n";
}

Testing::~Testing(){
	test_window();
}

void Testing::test_window(){
	std::cout<<"Testing if window.window is nullptr\n";
	assert(window.window);
	Passed();
	std::cout<<"Testing if window.renderer is nullptr\n";
	assert(window.renderer);
	Passed();
}
