#include<stdio.h>
void main()
{
int a[10],i,n,pos;
printf("Enter the limit :");
scanf("%d",&n);
printf("Enter the array element :");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("\nGiven array is :");
for(i=1;i<=n;i++)
{
printf("\t%d",a[i]);
}
printf("\nEnter the position to be deleted :");
scanf("%d",&pos);
for(i=pos;i<n;i++)
{
a[i]=a[i+1];
}
printf("\nConverted array :");
for(i=1;i<=n-1;i++)
{
printf("\t%d",a[i]);
}
printf("\n");
}
