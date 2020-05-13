#    include<stdio.h>
#include<conio.h>
main()
{
int i,j;
clrscr();
for(i=1;i<=4;i++)
{
for(j=1;j<=8;j++)
{
if(j>=5-i&&j<=9-i)
{
printf("*");
}
else
printf(" ");
}
printf("\n");
}
getch();
return 0;
}