#ifndef ROOK_H
#define ROOK_H
#include "piece.h"

class rook : public piece
{

public:
	rook();
	rook(int myXPos,int myYPos);
	void move();
};
#endif