#include <iostream>
#include "raylib.h"
#include "player.cpp"
#include "game_m.hpp"

int main()
{
	 InitWindow(400, 400, "Platformer");

     Platformer::GameManager Game;
     
     while (!WindowShouldClose()) {
         BeginDrawing();

         Game.drawScreen();

         /*
         newPlayer.drawPlayer();
         newPlayer.movePlayer( GetCharPressed() );
         ClearBackground(RAYWHITE);
         */
         EndDrawing();
     }
     CloseWindow();
     return 0;
}