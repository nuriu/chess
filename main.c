#include "raylib.h"

#include "include/board.h"
#include "include/constants.h"

int main()
{
    InitWindow(screenWidth, screenHeight, "Chess");
    SetTargetFPS(targetFPS);

    InitBoard("assets/board.png");

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
