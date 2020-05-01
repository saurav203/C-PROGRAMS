#include <stdio.h>
#include <conio.h>
int main()
{
int a,b,c;
a=b=c=0;
printf("Enter the value");
scanf("%d %d", &a, &b);
c=a+b;
printf("Sum of %d and %d is %d",a,b,c);
getch();
clrscr();
return 0;
}
