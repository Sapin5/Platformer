#ifndef SCREENAMANGER_H
#define SCREENAMANGER_H
#include "raylib.h"

namespace Platformer {
	class screen {
	public:
		int screen_height{ 100 };
		int screen_width{ 100 };

		enum class GameState { Home, Win, Loss};

		void setScreenSize(int screenX, int screenY);

		void update(char ch);

		void setScreen();

		GameState currentState{ GameState::Home };
	private:
		static constexpr int totalGameSates{ 3 };
	};
}
#endif // !SCREENAMANGER
