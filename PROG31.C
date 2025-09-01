#include<stdio.h>
#include<conio.h>
void main()
{
	int num[5],x=0;
	clrscr();
	printf("\n input five numbers :");
	for(x=0; x<=4; x=x+1)
	{
		scanf("%d",&num[x]);
	}

	for(x=0; x<=4; x=x+1)
	{
		printf("\n %d",num[x]);
	}
	getch();
}