#include "rook.h"
#include <iostream>
#include <string>
using namespace std;

rook::rook() : piece()
{
}
rook::rook(int myXPos,int myYPos) : piece(myXPos,myYPos,"Rook","R ")
{
	name="rook";
	xPos=8;
	xPosI=xPos;
	yPos=1;
	yPosI=yPos;
}


void rook::move()
{
	boundary=true;
	yPosI=yPos;
	xPosI=xPos;
	dMultY=0;
	dMultX=0;
	cout<<"select direction: "<<endl<<"	1. North (^)"<<endl<<"	2. South (v)"<<endl<<"	3. East (>)"<<endl<<"	4. West (<)"<<endl<<"	5. Cancel"<<endl;
	cin>>choice;
	switch (choice)
	{
		case 1:
			dMultY=1;
			dMultX=0;	
			break;
		case 2:
			dMultY=-1;
			dMultX=0;	
			break;
		case 3:
			dMultX=1;
			dMultY=0;		
			break;
		case 4:
			dMultY=0;	
			dMultX=-1;
			break;
		case 5:
			break;
		default:
			cout<<"oops try again, that's not an option"<<endl<<endl;
			break;
	}
	if((choice>=1)&&(choice<=4))
	{
		cout<<"number of spaces: ";
		cin>>input;
		cout<<"_______________________________________________________________________________________________"<<endl<<endl<<endl<<endl;
			if (dMultX==0)
			{
				if(((yPos+dMultY*input)>=1)&&((yPos+dMultY*input)<=8))
				{
					yPos=yPos+dMultY*input;
					boundary=false;
				}
				else
				{
					boundary=true;
				}	
			}
			else if (dMultY==0)
			{
				if((xPos+dMultX*input>=1)&&(xPos+dMultX*input<=8))
				{
					xPos=xPos+dMultX*input;
					boundary=false;
				}
				else
				{
					boundary=true;
				}	
			}
	if(boundary==true)
	{
		cout<<endl<<endl<<endl<<"Sorry, that option crosses the boundary. Try again.";
	}
	cout<<endl<<"Rook coordinates	x: "<<xPos<<"	y: "<<yPos<<endl<<endl<<endl;
	}
}