#include<stdio.h>
#include<conio.h>
int PrimeOrNot(int);
int main()
{
 int n,result;
 clrscr();
 printf("\nEnter the number");
 scanf("%d", &n);
 result=PrimeOrNot(n);
 if(result==1)
   printf("\nNumber is prime=%d",n);
 else
   printf("\nNumber is not prime=%d",n);
   getch();
   return 0;
}
int PrimeOrNot(int n)
{
  int i=2;
  while(i<=n/2)
  {
     if(n%i==0)
	     return 0;
     else
	     i++;
  }
  return 1;
}