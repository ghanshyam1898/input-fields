#include<iostream.h>
#include<conio.h>



char input,posx;


void hiddenfield(char code[])
	{
	cout<<"Enter the code : ";
	for(int i=0;;i++)
		{
		input=getch();
		if((int)input==8)
			i-=2;
		else
			code[i]=input;
			if((int)input==13)
				break;
		}
	}

void passwordfield(char code[])
	{
	cout<<"Enter the code : ";
	for(int i=0;;i++)
		{
		input=getch();
		if((int)input==13)
			break;

		else if((int)input==8)
			{
			i-=2;
			gotoxy((posx-1),1);
			clreol();
			posx=wherex();
			}
		else
			{
			code[i]=input;
			if((int)input!=13)
				cout<<"*";
			posx=wherex();
			}

		}

	}



