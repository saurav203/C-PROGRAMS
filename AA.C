#include<stdio.h>
long power(int,int);
void main()
{
int a,b;
long result;
printf("enter the number:");
scanf("%d",&a);
printf("enter the number:");
scanf("%d",&b);
result=power(a,b);
printf("result is: %d",result);
}
long power(int m,int n)
{
if(n==1)
return m;
else
return m*power(m,n-1);
}
getch();
