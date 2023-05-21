#ifndef PIECE_H
#define PIECE_H
#include <string>

class piece
{
protected:
	int kills;
	int xPos;
	int xPosTo;
	int xPosI;
	int yPos;
	int yPosTo;
	int yPosI;

	int input;
	std::string name;
	std::string pChar;

	int choice;
	int dMultX;
	int dMultY;

	bool boundary;
	int tempX;
	int tempY;
	int temp;

	bool dead;
public:
	piece();
	piece(int xPos,int yPos,std::string name,std::string pChar);

	std::string getName();
	std::string getChar();
	void setName(std::string myName);
	void setChar(char myChar);
	int returnXPOS();
	int returnYPOS();
	void setXPOSI(int myXPosI);
	void setYPOSI(int myYPosI);
	int getXPOSI();
	int getYPOSI();
	void setXPOS(int myXPOS);
	void setYPOS(int myYPOS);
	virtual void move()=0;

	void setDead();
	bool getDead();

	~piece();

};
#endif