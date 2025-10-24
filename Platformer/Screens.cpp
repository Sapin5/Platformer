#include "screen.hpp"
#include <iostream>
#include "Button.hpp"

namespace Platformer {


	Platformer::Button playButton(100, 100, 150, 150, BLUE, RED);
	void screen::setScreenSize(int screenX, int screenY) {
		screen_height = screenY;
		screen_width = screenX;
	}
	
	void screen::update(char ch) {
		if (ch == 'w') {
			currentState = GameState::Win;
		}
		else if (ch == 'l') {
			currentState = GameState::Loss;
		}
		else if (ch == 'h') {
			currentState = GameState::Home;
		}	
	}

	void screen::setScreen() {
		if (currentState == GameState::Home) {
			
			playButton.hoveredOver();

			//playButton.drawButton();
			ClearBackground(RAYWHITE);
		}else if (currentState == GameState::Win) {
			ClearBackground(BLUE);
		}else if (currentState == GameState::Loss) {
			ClearBackground(RED);
		}
	}
}