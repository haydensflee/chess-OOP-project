#include "piece.h"
#include "target.h"
#include <string>
#include <iostream>
using namespace std;

target::target() : piece(0,0,"Target","T ")
{
}

target::target(int myXPos, int myYPos) : piece(myXPos, myYPos, "Target","x ")
{
	name="target";
	xPos=myXPos;
	xPosI=xPos;
	yPos=myYPos;
	yPosI=yPos;
}
void target::move()
{
	cout<<"target movement later";
}