#include<stdio.h>
#include<string.h>
struct book{
int id,price;
char name[100];
};
int main()
{
struct book b;
printf("enter book id\n");
scanf("%d",&b.id);
printf("enter book name\n");
scanf("%s",&b.name);
printf("enter book price\n");
scanf("%d",&b.price);
printf("book id=%d\n",b.id);
printf("book name=%s\n",b.name);
printf("book price=%d\n",b.price);
return 0;
}