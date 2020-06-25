#include<stdio.h>
#include<conio.h>
int main()
{
int h=0,m=0,s=0;
double i;
clrscr();
printf("please enter a time format in hh:mm:ss");
scanf("%d%d%d",&h,&m,&s);
start:
for(h=0;h<24;h++)
{
for(m=0;m<60;m++)
{
for(s=0;s<60;s++)
{
clrscr();
printf("%d:%d:%d",h,m,s);
if(h<12)
{
printf(" am");
}
else
{
printf(" pm");
}
for(i=0;i<36199999;i++)
			 i++;
			 i--;
			}
			 h=0;
			}
			m=0;
			}
			s=0;
			goto start;
			return 0;
			getch();
			}














