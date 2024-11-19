//
//  main.cpp
//  RaylibProject
//
//  Created by David Richter on 11/18/24.
//

#include <iostream>
#include "raylib.h"

int main(int argc, const char* argv[]) {
    const int screenWidth = 1280;
    const int screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    
    SetTargetFPS(60);
    
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;
}
