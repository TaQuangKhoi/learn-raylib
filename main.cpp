#include <iostream>
#include <raylib.h>

int main() {
    int ballX = 400;
    int ballY = 400;
    int speed = 3;
    constexpr Color green = {20, 160, 133, 255};

    InitWindow(800, 800, "Keios Development");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        // 1. Event Handling
        if (IsKeyDown(KEY_RIGHT)) {
            ballX += speed;
        }
        if (IsKeyDown(KEY_LEFT)) {
            ballX -= speed;
        }
        if (IsKeyDown(KEY_UP)) {
            ballY -= speed;
        }
        if (IsKeyDown(KEY_DOWN)) {
            ballY += speed;
        }

        // Edit Speed
        if (IsKeyDown(KEY_A)) {
            speed--;
        }
        if (IsKeyDown(KEY_S)) {
            speed++;
        }

        // if ball at left edge of screen, move it to the right edge
        if (ballX < 0) {
            ballX = 800;
        }
        if (ballX > 800) {
            ballX = 0;
        }
        if (ballY < 0) {
            ballY = 800;
        }
        if (ballY > 800) {
            ballY = 0;
        }



        // // 2. Updating Position


        // 3. Drawing
        BeginDrawing();
        ClearBackground(green);
        DrawCircle(ballX, ballY, 20, WHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
