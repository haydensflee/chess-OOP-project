#ifndef CHESS_H
#define CHESS_H
#include "piece.h"
#include <string>

class chess
{
	int counter;
	int counterCheck;
	int counterT;
	int deadCounter;
	int player1Max;			//If more time allowed, would have made a full chessboard of 16 pieces
	int targetMax;			//Would have created player 2, but instead changed to "targets"
	std::string ** board;
	piece * pieceList [16];
	piece * tList [16];
	piece * deadList [32];
	int x;
	int y;
	int tx;
	int ty;
	int tempX;
	int tempY;

public:
	//default constructor
	chess();

	//adders
	void addPiece(piece * myPiece);
	void addTarget(piece * myPiece);
	void checkClash(piece * myPiece);

	//printing
	void printBoard();

	//deconstructor
	~chess();
};
#endif