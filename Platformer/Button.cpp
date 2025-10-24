#include "Button.hpp"


namespace Platformer {

	void Button::hoveredOver() {
		drawButton();
		
		if (GetMousePosition().x >= xPos && GetMousePosition().x <= xPos + width &&
			GetMousePosition().y >= yPos && GetMousePosition().y <= yPos + height) {
			//C = hovered;
			clicked();
		}
		else {
			C = normal;
		}
	}

	void Button::drawButton() const {
		DrawRectangle(xPos, yPos, height, width, C);
	}

	void Button::clicked() {
		if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
			C = GREEN;
		}
	}
}