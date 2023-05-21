#include "piece.h"
#include <string>
#include <iostream>
using namespace std;

piece::piece()
{
	kills=0;
	xPos=0;
	xPosTo=0;
	xPosI=0;
	yPos=0;
	yPosTo=0;
	yPosI=0;
	boundary=false;
	pChar = "p";
	dead=false;
}
piece::piece(int myXPos,int myYPos,std::string myName,std::string myPChar)
{
	kills=0;
	xPos=myXPos;
	xPosTo=0;
	xPosI=0;
	yPos=myYPos;
	yPosTo=0;
	yPosI=0;
	boundary=false;
	name=myName;
	pChar = myPChar;
}

void piece::setName(string myName)
{
	name=myName;
}
void piece::setChar(char myChar)
{
	pChar=myChar;
}

string piece::getName()
{
	return name;
}
string piece::getChar()
{
	return pChar;
}

int piece::returnXPOS()
{
	return xPos;
}
int piece::returnYPOS()
{
	return yPos;
}
void piece::setXPOS(int myXPOS)
{
	xPos=myXPOS;
}
void piece::setYPOS(int myYPOS)
{
	yPos=myYPOS;
}

void piece::setXPOSI(int myXPosI)
{
	xPosI=myXPosI;
}
void piece::setYPOSI(int myYPosI)
{
	yPosI=myYPosI;
}
int piece::getXPOSI()
{
	return xPosI;
}
int piece::getYPOSI()
{
	return yPosI;
}

void piece::move()
{
	cout<<"move? No thanks I'm fine";
}

void piece::setDead()
{
	dead=true;
}
bool piece::getDead()
{
	return dead;
}
piece::~piece(){
	
}