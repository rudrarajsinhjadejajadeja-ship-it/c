#include<stdio.h>
#include<conio.h>
void main()
{
	int x = 9, y = 1;
	clrscr();

	while(y<=7)
	{
		x=9;
		while(x>=1)
		{
			printf("%d  ",x);
			x=x-2;
		}
		printf("\n");
		y=y+1;
	}
	getch();
}