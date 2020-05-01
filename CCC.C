#include<stdio.h>
void main()
{
int row,col,space,n,c;
printf("enter the number of rows");
scanf("%d",&n);
for(row=0;row<=n;row++)
{
c=1;
for(space=0;space<=n(n-row);space++)
{
printf(" ");
}
for(col=0;col<=row;col++)
{
printf("%d",c);
c=c*(row-col)/col++);
}
printf("\n");
}
getch();
}