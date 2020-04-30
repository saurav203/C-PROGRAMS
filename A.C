#include<stdio.h>
#include<conio.h>
int main()
{
int row,space,p,n;
printf("enter the number of rows");
scanf("%d",&n);
for(row=1;row<=n;row++);
{
for(space=0;space<=(n-row);space++);
{
printf(" ");
}
for(p=1;p<=row;p++)
{
printf("%d",row);
}
printf("\n");
}
getch();
return 0;
}
