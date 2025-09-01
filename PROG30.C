#include<stdio.h>
#include<conio.h>
void main()
{
	int x=0,y=0, z=0;
	clrscr();
	printf("\n input two numbers");
	scanf("%d%d",&x,&y);
	z= addition(x,y);
	printf("\n adition=%d",z);
	getch();
}


int addition(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
}


