#include <string>
#include <iostream>

using namespace std;
#include "piece.h"
#include "pawn.h"
#include "rook.h"
#include "bishop.h"
#include "chess.h"
#include "target.h"

int main()
{
	int choice=0;
	bool running=true;

	//variables for initial position (moving pieces)
	int PXi=0;
	int PYi=0;
	int PXf=0;
	int PYf=0;

	chess myBoard;

	pawn * pawn1=new pawn(1,2);
	rook * rook2=new rook(8,1);
	bishop * bishop1=new bishop(3,1);
	myBoard.addPiece(pawn1);
	myBoard.addPiece(rook2);
	myBoard.addPiece(bishop1);
	target * target1=new target(6,4);
	target * target2=new target(8,8);
	target * target3=new target(3,7);
	myBoard.addTarget(target1);
	myBoard.addTarget(target2);
	myBoard.addTarget(target3);

	myBoard.printBoard();
	
	while(running==true)
	{
		cout<<"Select action:"<<endl<<"	1. move Pawn"<<endl<<"	2. move Rook"<<endl
		<<"	3. move Bishop"<<endl<<"	4. EXIT"<<endl;
		cin>>choice;
		if(choice==1)
		{
			pawn1->move();
			myBoard.checkClash(pawn1);
			myBoard.printBoard();
		}
		else if(choice==2)
		{
			rook2->move();
			myBoard.checkClash(rook2);
			myBoard.printBoard();
		}
		else if(choice==3)
		{
			bishop1->move();
			myBoard.checkClash(bishop1);
			myBoard.printBoard();
		}
		else if(choice==4)
		{
			running=false;
		}
	}
	return 0;
}

