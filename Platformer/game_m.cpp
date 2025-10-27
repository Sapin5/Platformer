#include "game_m.hpp"
#include <iostream>

namespace Platformer {
	char key{ };
	Platformer::screen gameScreen;
	//drawing
	void GameManager::drawScreen(){
		key = Platformer::getKeyPressed();
		std::cout << key;
		gameScreen.update(key);

		gameScreen.setScreen();
	}
	//updating
}