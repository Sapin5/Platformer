#include "Button.hpp"
#include <iostream>


namespace Platformer {

	void Button::hoveredOver() {
		
		if (GetMousePosition().x >= xPos && GetMousePosition().x <= xPos + width &&
			GetMousePosition().y >= yPos && GetMousePosition().y <= yPos + height) {
			
			if (!IsMouseButtonDown(MOUSE_BUTTON_LEFT)) {
				C = hovered;
			}
			else {
				C = GREEN;
			}
		}
		else {
			C = normal;
		}
	}

	void Button::drawButton() {
		DrawRectangle(xPos, yPos, width, height, C);
		hoveredOver();
	}
}