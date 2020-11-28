#include "include/board.h"
#include "include/constants.h"

ChessBoard board = {0};

void InitBoard(const char* texturePath)
{
    board.texture     = LoadTexture(texturePath);
    board.pieceLength = (board.texture.width - 20) / 8;
    board.position    = (Vector2){0, 0};

    LoadPieceTextures();

    for (int i = 8; i < 16; i++)
    {
        board.whitePieces[i] = (ChessPiece){
            .texture  = &whitePawnTexture,
            .position = (Vector2){10 + ((i - 8) * board.pieceLength) - board.pieceLength / 2,
                                  board.pieceLength - (board.pieceLength / 2)},
        };

        board.blackPieces[i - 8] = (ChessPiece){
            .texture  = &blackPawnTexture,
            .position = (Vector2){10 + ((i - 8) * board.pieceLength) - board.pieceLength / 2,
                                  (6 * board.pieceLength) - (board.pieceLength / 2)},
        };
    }
}

void DrawBoard()
{
    DrawTextureV(board.texture, board.position, WHITE);

    for (int i = 8; i < 16; i++)
    {
        DrawTextureV(*board.whitePieces[i].texture, board.whitePieces[i].position, WHITE);

        DrawTextureV(*board.blackPieces[i - 8].texture, board.blackPieces[i - 8].position, WHITE);
    }
}

void DeInitBoard()
{
    UnloadPieceTextures();
    UnloadTexture(board.texture);
}
