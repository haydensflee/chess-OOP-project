#ifndef BISHOP_H
#define BISHOP_H
#include "piece.h"

class bishop : public piece
{
public:
	bishop();
	bishop(int myXPos,int myYPos);
	void move();
};
#endif