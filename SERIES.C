
#include <stdio.h>
#include <conio.h>
void main()
{
    int a,i=1,reminder;
    clrscr();
    printf("Enter A value");
    scanf("%d",&a);
    for(i;i<=100;i++)
    {
	reminder=i%a;
	if(reminder==0)
	{
	    printf("%d\t",i);
	}
    }


    getch();
}