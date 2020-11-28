#pragma once

#ifndef PIECE_H
#define PIECE_H

#include "raylib.h"

typedef struct ChessPiece
{
    Vector2    position;
    Texture2D* texture;
} ChessPiece;

extern Texture2D whitePawnTexture;
extern Texture2D whiteBishopTexture;
extern Texture2D whiteKingTexture;
extern Texture2D whiteKnightTexture;
extern Texture2D whiteQueenTexture;
extern Texture2D whiteRookTexture;

extern Texture2D blackPawnTexture;
extern Texture2D blackBishopTexture;
extern Texture2D blackKingTexture;
extern Texture2D blackKnightTexture;
extern Texture2D blackQueenTexture;
extern Texture2D blackRookTexture;

void LoadPieceTextures();
void UnloadPieceTextures();

#endif
