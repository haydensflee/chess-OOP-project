#ifndef PAWN_H
#define PAWN_H
#include "piece.h"

class pawn : public piece
{
	bool first;
public:
	pawn();
	pawn(int myXPos,int myYPos);
	void move();
};

#endif