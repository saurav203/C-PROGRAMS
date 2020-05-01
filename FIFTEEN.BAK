#include<stdio.h>
#include<stdlib.h>
#define max 5

void push();
void pop();
void display();

int array[max],top,item;
int main()
{
int choice;
do
{
printf("\n 1.push");
printf("\n 2.pop");
printf("\n 3.display");
printf("\n 4.exit");

printf("enter ther choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();
break;

case 2:
pop();
break;

case 3:
display();
break;

case 4:
exit(0);
break;

default:
printf("\n invalid try again");
break;
}
}
while(choice!=4);
{
void push();
{
int item;
if(top==max)
{
printf("\n stack is full");
}
else
{
printf("enter the elements");
scanf("%d",&item);
top=top+1;
array[top]=item;
}
}
void pop();
{
int item;
if(top==0)
{
printf("\n stack is empty");
}
else
{
item=array[top];
top=top-1;
printf("\n enter the pop elements is: %d",item);
}
}
void display();
{
int i;
if(top==0)
{
printf("\n stack is empty");
}
else
{
printf("\n elements are:\n");
for(i=top;i>0;i--)
printf("\t %d",&array[i]);
}
}
}
return 0;
}

