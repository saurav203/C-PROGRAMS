#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int n,arm,rem,temp;
scanf("%d",&n);
temp=n;
rem=0;
while(temp!=0)
{
rem=temp%10;
arm=arm+rem*rem*rem;
temp=temp/10;
}
if(n==arm)
    printf("it is a Armstrong number");
else
    printf("NOT a armstrong number");
getch();
return 0;
}


