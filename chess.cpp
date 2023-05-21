#include "piece.h"
#include "chess.h"
#include "pawn.h"
#include "rook.h"
#include "bishop.h"
#include "target.h"

#include <iostream>
#include <string>
using namespace std;


//-----constructor-----//
chess::chess()
{
	tx=0;
	ty=0;
	player1Max=16;
	targetMax=16;
	counter=0;
	counterT=0;
	deadCounter=0;

	//-----create initial board-----//
	board=new string * [8];
	for(int i=0;i<8;i++)
	{
		board[i]=new string [8];
		for(int j=0;j<8;j++)
		{
			board[i][j]="- ";
		}
	}
}

//-----add player 1 pieces-----//
void chess::addPiece(piece * myPiece)
{
	if(counter<16)
	{
		pieceList[counter]=myPiece;
		counter++;
    }
}

//-----add target (player 2) pieces-----//
void chess::addTarget(piece * myPiece)
{
	if(counterT<16)
	{
		tList[counterT]=myPiece;
		counterT++;
    }
}

//-----check player 1 piece overlap-----//
void chess::checkClash(piece * myPiece)
{
	counterCheck=0;
	tempX=myPiece->getXPOSI();
	tempY=myPiece->getYPOSI();
	for (int i=0;i<counter;i++)
	{
		if ((myPiece->returnXPOS()==pieceList[i]->returnXPOS())&&(myPiece->returnYPOS()==pieceList[i]->returnYPOS()))
		{
			counterCheck++;
		}
	}
	if (counterCheck>1)
	{
		myPiece->setXPOS(tempX);
		myPiece->setYPOS(tempY);
		cout<<endl<<endl<<"Sorry, there is already a piece you own on that spot. Try again."<<endl;
	}

	//-----target hit detection-----//
	for (int j=0;j<counterT;j++)
	{
		if ((myPiece->returnXPOS()==tList[j]->returnXPOS())&&(myPiece->returnYPOS()==tList[j]->returnYPOS()))
		{
			if((tList[j]->getDead())==false)
			{
				deadCounter++;
				tList[j]->setDead();
			}
		}
	}
}

//-----print out chess board-----//
void chess::printBoard()
{
	cout<<endl<<endl<<"						THE CHESS BOARD"<<endl;
	cout<< "					      ==================="<<endl;
	//loops remove the piece from its previous position once they have moved
	for (int a=0;a<counter;a++)
	{
		x=pieceList[a]->returnXPOS();
		y=pieceList[a]->returnYPOS();
		tempX=pieceList[a]->getXPOSI();
		tempY=pieceList[a]->getYPOSI();
		board[7+1-tempY][tempX-1]="- ";
		board[7+1-y][x-1]=pieceList[a]->getChar();
	}
	for (int b=0;b<counterT;b++)
	{
		if((tList[b]->getDead())==false)
		{
			tx=tList[b]->returnXPOS();
			ty=tList[b]->returnYPOS();
			board[7+1-ty][tx-1]=tList[b]->getChar();
		}
	}

	//--------PRINT FUNCTION---------//
		for(int i=0;i<8;i++)
		{
			cout<<"						";
			for(int j=0;j<8;j++)
			{
				cout<<board[i][j];
			}
			cout<<endl;
		}
		cout<<endl<<endl;
		cout<<"Your kills: ";
		if (deadCounter<1)
		{
			cout<<"none";
		}
		else
		{
			for(int j=0;j<deadCounter;j++)
			{
				cout<<tList[j]->getChar();
			}
		}
		
		cout<<endl;
}

//-----deconstructor-----//
chess::~chess(){
}