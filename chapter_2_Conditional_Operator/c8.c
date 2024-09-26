// wap to find greatest of 4 no. using conditional operators
#include<stdio.h>
int main()
{
    int a,b,c,d;
	printf("Enter the four numbers:-\t\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if((a>b) && (a>c) && (a>d))
	{
	  printf("%d is the greatest amongst the given numbers.",a);
	}
	
	if((b>a) && (b>c) && (b>d))
	{
	  printf("%d is the greatest amongst the given numbers.",b);
	}
	
	if((c>b) && (c>a) && (c>d))
	{
	  printf("%d is the greatest amongst the given numbers.",c);
	}
	
	else
	{
	  printf("%d is greatest amongst the given numbers.",d);
	}
    return 0;
}