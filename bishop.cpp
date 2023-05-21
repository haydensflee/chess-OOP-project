#include "bishop.h"
#include <string>
#include <iostream>
using namespace std;
//-----default-----//
bishop::bishop() : piece()
{
}

//-----default(input)-----//
bishop::bishop(int myXPos,int myYPos) : piece(myXPos,myYPos,"Bishop","B ")
{
	name="bishop";
	xPos=myXPos;
	xPosI=xPos;
	yPos=myYPos;
	yPosI=yPos;
}

//-----bishop movement-----//
void bishop::move()
{
	boundary=true;
	yPosI=yPos;
	xPosI=xPos;
	cout<<"select direction: "<<endl<<"	1. NorthEast (^>)"<<endl<<"	2. NorthWest (<^)"<<endl<<"	3. SouthEast (v>)"<<endl<<"	4. SouthWest (<v)"<<endl<<"	5. Cancel"<<endl;
	cin>>choice;
	switch (choice)
	{
		case 1:
			dMultX=1;
			dMultY=1;
			break;
		case 2:
			dMultX=-1;
			dMultY=1;
			break;
		case 3:
			dMultX=1;
			dMultY=-1;
			break;
		case 4:
			dMultX=-1;
			dMultY=-1;
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
		tempY=input-yPos; 
		tempX=input-xPos; 
		if (((yPos+dMultY*input)>=1)&&((xPos+dMultX*input)<=8))
		{
			yPos=yPos+dMultY*input;
			xPos=xPos+dMultX*input;
			boundary=false;
		}
		else
		{
			boundary=true;
			cout<<endl<<endl<<"Sorry, that goes over the boundary. Try again.";
		}
		cout<<endl<<endl<<"Bishop coordinates	x: "<<xPos<<"	y: "<<yPos<<endl<<endl<<endl;
	}
}

