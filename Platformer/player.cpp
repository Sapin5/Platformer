#include <iostream>
#include "player.hpp"

class player {
public: 
	void drawPlayer(){
		DrawRectangle(100, 100, 10, 10, RED);
	}
public:
	void movePlayer(char key) {
		std::cout << key;
	}
};