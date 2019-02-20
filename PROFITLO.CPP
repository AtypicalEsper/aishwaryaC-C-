#include<stdio.h>
#include<conio.h>
void main()
{
 int CP, SP, profit, loss;
 clrscr();
 printf("Enter a value of CP");
 scanf("%d", &CP);
 printf("Enter a value of SP");
 scanf("%d", &SP);
 if(CP>SP)
 {
  loss=CP-SP;
  printf("%d", &loss);
 }
 else
  {
   profit=SP-CP;
   printf("%d", &profit);
  }
  getch();
}