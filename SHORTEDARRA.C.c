 #include<stdio.h>
 main()
 {
int a[100],i,j,n,temp;
printf(" enter the number of elements you want in array");
scanf("%d",&n);
printf(" enter the array elements");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
{
    if(a[j]>a[j+1])
    {
        temp=a[i];
        a[i]=a[j+1];
        a[j+1]=temp;

    }
}
 }
printf(" the sorted array is");
for(i=0;i<n;i++)
{
    printf("\n%d",a[i]);
    }
 }
 return 0;
 }