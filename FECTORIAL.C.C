#include<stdio.h>
void main()
{
int n,i;
long int f=1;
printf("give the number whose factorial is find");
scanf("%d",&n);
if(n<0)
printf("factorial of a negative number does not exits");
else
if(n==0)
f=1;
else
{
for(i=1;i<=n;i++)
f=f*i;
}
printf("the factorial of a given number is %id",f);
}
