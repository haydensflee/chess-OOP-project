#ifndef TARGET_H
#define TARGET_H
#include "piece.h"
#include <string>

class target : public piece
{
public:
	target();
	target(int myXPos,int myYPos);
	void move();
};

#endif