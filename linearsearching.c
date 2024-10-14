#include<stdio.h>
void main()
{
int a[10],i,n,s;
printf("Enter limit of the array:");
scanf("%d",&n);
printf("\nEnter the elements of the array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nThe array of the elements are:\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\nEnter the element to be search:\n");
scanf("%d",&s);
printf("\nThe element to be search:%d",s);
for(i=0;i<n;i++)
{
if(a[i]==s)
{
printf("\nThe given number position is: %d\n",i+1);
break;
}
}
if(i==n)
{
printf("\nThe given number is not in the list\n");
}
}


