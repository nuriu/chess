#include "include/board.h"
#include "include/constants.h"

ChessBoard board = {0};

void InitPieces();

void InitBoard(const char* texturePath)
{
    board.texture     = LoadTexture(texturePath);
    board.pieceLength = (board.texture.width - 10) / 8;
    board.position    = (Vector2){40, 80};

    LoadPieceTextures();
    InitPieces();
}

void DrawBoard()
{
    DrawTextureV(board.texture, board.position, WHITE);

    for (int i = 0; i < 16; i++)
    {
        DrawTextureV(*board.blackPieces[i].texture, board.blackPieces[i].position, WHITE);
        DrawTextureV(*board.whitePieces[i].texture, board.whitePieces[i].position, WHITE);
    }
}

void DeInitBoard()
{
    UnloadPieceTextures();
    UnloadTexture(board.texture);
}

void InitPieces()
{
    for (int i = 0; i < 8; i++)
    {
        board.whitePieces[i] = (ChessPiece){
            .position = (Vector2){40 + (i * board.pieceLength) - board.pieceLength / 2,
                                  70 + ((6 * board.pieceLength) - (board.pieceLength / 2))},
        };

        board.blackPieces[(i + 8) % 16] = (ChessPiece){
            .position = (Vector2){40 + (i * board.pieceLength) - board.pieceLength / 2,
                                  80 + (board.pieceLength / 2)},
        };

        board.whitePieces[i].texture     = &whitePawnTexture;
        board.blackPieces[i + 8].texture = &blackPawnTexture;
    }

    for (int i = 8; i < 16; i++)
    {
        board.whitePieces[i].position =
            (Vector2){40 + ((i - 8) * board.pieceLength) - board.pieceLength / 2.4,
                      70 + (6 * board.pieceLength) + (board.pieceLength / 3)};

        board.blackPieces[i - 8].position =
            (Vector2){40 + ((i - 8) * board.pieceLength) - board.pieceLength / 2,
                      80 + (-1 * board.pieceLength / 1.5)};
    }

    board.whitePieces[8].texture  = &whiteRookTexture;
    board.whitePieces[15].texture = &whiteRookTexture;
    board.whitePieces[9].texture  = &whiteKnightTexture;
    board.whitePieces[14].texture = &whiteKnightTexture;
    board.whitePieces[10].texture = &whiteBishopTexture;
    board.whitePieces[13].texture = &whiteBishopTexture;
    board.whitePieces[11].texture = &whiteQueenTexture;
    board.whitePieces[12].texture = &whiteKingTexture;

    board.blackPieces[0].texture = &blackRookTexture;
    board.blackPieces[7].texture = &blackRookTexture;
    board.blackPieces[1].texture = &blackKnightTexture;
    board.blackPieces[6].texture = &blackKnightTexture;
    board.blackPieces[2].texture = &blackBishopTexture;
    board.blackPieces[5].texture = &blackBishopTexture;
    board.blackPieces[3].texture = &blackQueenTexture;
    board.blackPieces[4].texture = &blackKingTexture;
}
