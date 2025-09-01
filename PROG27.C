#include<stdio.h>
#include<conio.h>
void addition (int x,int y);
void main()
{
	int x=0,y=0;
	clrscr();
	printf("\n input two numbers:");
	scanf("%d,%d",&x,&y);
	addition(x,y);
	printf("\n subtraction : %d",x-y);
	addition(x,y);
	printf("\n multiplication : %d",x*y);
	addition(x,y);
	printf("\n division : %2f",(float)x/y);
	addition(x,y);
	getch();
}
void addition (int x,int y)
{
	int z=0;
	z=x+y;
	printf("\n addition= %d",z);
}
