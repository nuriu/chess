#pragma once

#ifndef BOARD_H
#define BOARD_H

#include "raylib.h"
#include "piece.h"

typedef struct ChessBoard
{
    Vector2    position;
    Texture2D  texture;
    int        pieceLength;
    ChessPiece whitePieces[16];
    ChessPiece blackPieces[16];
} ChessBoard;

extern ChessBoard board;

void InitBoard(const char* texturePath);
void DrawBoard();
void DeInitBoard();

#endif
