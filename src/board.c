#include "include/board.h"
#include "include/constants.h"

ChessBoard board = {0};

void InitBoard(const char *texturePath, const float rotation, const float scale)
{
    board.texture = LoadTexture(texturePath);
    board.rotation = rotation;
    board.scale = scale;
    board.position = (Vector2){(screenWidth - (board.texture.width * board.scale)) / 2,
                               (screenHeight - (board.texture.height * board.scale)) / 2};
}

void DrawBoard()
{
    DrawTextureEx(board.texture, board.position, board.rotation, board.scale, WHITE);
}

void DeInitBoard()
{
    UnloadTexture(board.texture);
}
