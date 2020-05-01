#include<stdio.h>
main()
{
struct book;
{
char name[25];
char author[25];
int callno;
};
struct book b1={"let us c","ypk",101};
struct book*ptr;
ptr=&b1;
printf("%s%s%d\n",b1name,b1author,b1callno);
printf("enter the ptr value is:%d",ptr);
return 0;
}