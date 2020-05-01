#include<stdio.h>
#include<conio.h>
int multi(int a,int b);
int main()
{
int v1,v2,ans;
v1=v2=ans=0;
scanf("%d%d",&v1,&v2);
ans=multi(v1,v2);
printf("answer is %d",ans);
getch ();
return 0;
}
int multi(int a,int b)
{
int c;
c=a*b;
return c;
}

