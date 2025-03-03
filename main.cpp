#include <iostream>
#include <raylib.h>

int main()
{
    InitWindow(800, 800, "Keios Development");

    // wait for awhile
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Do Nguyen", 10, 10, 20, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
