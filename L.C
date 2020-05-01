#include<stdio.h>
int main()
{
int row,colum,space,n,a;
printf("enter the number of rows:");
scanf("%d",&n);
for(row=1;row<=n;row++)
{
for(space=0;space<=(n-row);space++)
{
printf(" ");
}
for(a=1;a<=row;a++)
{
printf("%d",row);
}
}
return 0;
}