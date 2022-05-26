#include <iostream>
using namespace std;

const int DIMENSION = 7;

// C++ 11 scoped enum
enum Piece
{
    Empty = 0,
    Pawn,
    Knight,
    Bishop,
    Rook,
    Queen,
    King,
};

void printBoard(Piece board[DIMENSION][DIMENSION])
{
    for (int i = 0; i < DIMENSION; i++)
    {
        for (int j = 0; j < DIMENSION; j++)
        {
            cout << "R" << i << "|C" << j << ":" << board[i][j] << endl;
        }
    }
}

int main()
{

    Piece chessBoard[DIMENSION][DIMENSION] = {};

    /* Pawns */
    for (int i = 0; i < DIMENSION; i++)
    {
        // white
        chessBoard[6][i] = Piece::Pawn;
        // black
        chessBoard[1][i] = Piece::Pawn;
    }

    /* Knights */
    // white
    chessBoard[6][1] = Piece::Knight;
    chessBoard[6][6] = Piece::Knight;

    // black
    chessBoard[0][1] = Piece::Knight;
    chessBoard[0][6] = Piece::Knight;

    /* Bishops */
    // white
    chessBoard[6][2] = Piece::Bishop;
    chessBoard[6][5] = Piece::Bishop;

    // black
    chessBoard[0][2] = Piece::Bishop;
    chessBoard[0][5] = Piece::Bishop;

    /* Rooks */
    // white
    chessBoard[6][0] = Piece::Rook;
    chessBoard[6][6] = Piece::Rook;

    // black
    chessBoard[0][0] = Piece::Rook;
    chessBoard[0][6] = Piece::Rook;

    /* Queen + King */
    // white
    chessBoard[6][3] = Piece::Queen;
    chessBoard[6][4] = Piece::King;

    // black
    chessBoard[0][3] = Piece::Queen;
    chessBoard[0][4] = Piece::King;

    // print board
    printBoard(chessBoard);
    return 0;
}
