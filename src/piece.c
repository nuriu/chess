#include "include/piece.h"

Texture2D whitePawnTexture   = {0};
Texture2D whiteBishopTexture = {0};
Texture2D whiteKingTexture   = {0};
Texture2D whiteKnightTexture = {0};
Texture2D whiteQueenTexture  = {0};
Texture2D whiteRookTexture   = {0};

Texture2D blackPawnTexture   = {0};
Texture2D blackBishopTexture = {0};
Texture2D blackKingTexture   = {0};
Texture2D blackKnightTexture = {0};
Texture2D blackQueenTexture  = {0};
Texture2D blackRookTexture   = {0};

void LoadPieceTextures()
{
    whitePawnTexture   = LoadTexture("assets/chess-pawn-white.png");
    whiteBishopTexture = LoadTexture("assets/chess-bishop-white.png");
    whiteKingTexture   = LoadTexture("assets/chess-king-white.png");
    whiteKnightTexture = LoadTexture("assets/chess-knight-white.png");
    whiteQueenTexture  = LoadTexture("assets/chess-queen-white.png");
    whiteRookTexture   = LoadTexture("assets/chess-rook-white.png");

    blackPawnTexture   = LoadTexture("assets/chess-pawn-black.png");
    blackBishopTexture = LoadTexture("assets/chess-bishop-black.png");
    blackKingTexture   = LoadTexture("assets/chess-king-black.png");
    blackKnightTexture = LoadTexture("assets/chess-knight-black.png");
    blackQueenTexture  = LoadTexture("assets/chess-queen-black.png");
    blackRookTexture   = LoadTexture("assets/chess-rook-black.png");
}

void UnloadPieceTextures()
{
    UnloadTexture(whitePawnTexture);
    UnloadTexture(whiteBishopTexture);
    UnloadTexture(whiteKingTexture);
    UnloadTexture(whiteKnightTexture);
    UnloadTexture(whiteQueenTexture);
    UnloadTexture(whiteRookTexture);

    UnloadTexture(blackPawnTexture);
    UnloadTexture(blackBishopTexture);
    UnloadTexture(blackKingTexture);
    UnloadTexture(blackKnightTexture);
    UnloadTexture(blackQueenTexture);
    UnloadTexture(blackRookTexture);
}
