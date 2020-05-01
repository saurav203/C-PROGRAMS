#include<stdio.h>
int main()
{
int a[20],i,size,largest;
printf("enter the size of the array:\n");
scanf("%d",&size);
printf("enter the elements of the array:");
for(i=0;i<size;i++)
{
scanf("%d",a[i]);
}
largest=a[0];
for(i=0;i<size;i++)
{
if(largest<a[i])
{
largest=a[i];
}
}
printf("\n largest elements in a array=%d",largest);
return 0;
}