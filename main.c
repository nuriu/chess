#include "raylib.h"

#include "include/board.h"
#include "include/constants.h"

int main()
{
    InitWindow(screenWidth, screenHeight, "Chess");
    SetTargetFPS(targetFPS);

    InitBoard("assets/board.png", 0.0f, 0.4f);

    while (!WindowShouldClose())
    {
        // UPDATE
        //------------------------------------------------------------------------------------------

        //------------------------------------------------------------------------------------------

        // DRAW
        //------------------------------------------------------------------------------------------
        BeginDrawing();
        {
            ClearBackground(GRAY);
            DrawBoard();
        }
        EndDrawing();
    }

    DeInitBoard();
    CloseWindow();

    return 0;
}
