#pragma once

#ifndef BOARD_H
#define BOARD_H

#include "raylib.h"

typedef struct ChessBoard
{
    Vector2 position;
    Texture2D texture;
    float scale;
    float rotation;
} ChessBoard;

extern ChessBoard board;

void InitBoard(const char *texturePath, const float rotation, const float scale);
void DrawBoard();
void DeInitBoard();

#endif
