#include "game_m.hpp"
#include <iostream>


namespace Platformer {
	Platformer::screen gameScreen;
	//drawing
	void GameManager::drawScreen(){

		int ch{ GetCharPressed() };

		gameScreen.update(static_cast<char>(ch));

		gameScreen.setScreen();
	}
	//updating
}