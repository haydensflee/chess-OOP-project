#include "pawn.h"

#include <string>
#include <iostream>

using namespace std;

//-----default constructor-----//
pawn::pawn() : piece(0,0,"Pawn","P ")
{

}
//-----default constructor(input)-----//
pawn::pawn(int myXPos,int myYPos) : piece(myXPos,myYPos,"Pawn","P ")
{
	name="pawn";
	first = true;
	xPos=myXPos;
	xPosI=xPos;
	yPos=myYPos;
	yPosI=yPos;
}

//-----pawn movement-----//
void pawn::move()
{
	if(yPos<8)
	{
		if(first == true)
		{
			cout<<"move forward 1 or 2 spaces: ";

			cin>>yPosTo;
			if(yPosTo>2)
			{
				while(yPosTo>2)
				{
					cout<<"oi stop trying to cheat, pick one or two!"<<endl;
					cout<<"move forward 1 or 2 spaces: ";
					cin>>yPosTo;
				}
				
			}
			cout<<endl;
			cout<<"_______________________________________________________________________________________________"<<endl<<endl<<endl<<endl;
			yPosI=yPos;
			xPosI=xPos;
			yPos=yPos+yPosTo;
			cout<<"		Pawn coordinates	x: "<<xPos<<"	y: "<<yPos<<endl<<endl<<endl;
			first=false;
		}
		else
		{
			cout<<"_______________________________________________________________________________________________"<<endl<<endl;
			yPosI=yPos;
			xPosI=xPos;
			cout<<"Pawn can only move forward 1 space. ";
			yPos++;
			cout<<endl<<endl<<"		Pawn coordinates	x: "<<xPos<<"	y: "<<yPos<<endl<<endl<<endl;
		}
	}
	else
	{
		cout<<"_______________________________________________________________________________________________";
		cout<<endl<<endl<<endl<<"		Pawn coordinates	x: "<<xPos<<"	y: "<<yPos<<endl<<endl<<"sorry, boundary reached. Try another option"<<endl<<endl;
	}
}