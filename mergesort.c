#include<stdio.h>
void main()
{
int a[10],b[10],c[20];
int i,j,n,m,k,size;
printf("Enter the size of the first array :");
scanf("%d",&n);
printf("Enter the size of the second array :");
scanf("%d",&m);
printf("\nEnter the first array elements :");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter the second array elements :");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
printf("\nThe first array elements :");
for(i=0;i<n;i++)
{
printf("\t%d",a[i]);
}
printf("\nThe second array elements :");
for(i=0;i<m;i++)
{
printf("\t%d",b[i]);
}
size=n+m;
for(i=0;i<n;i++)
{
c[i]=a[i];
}
for(i=0;i<m;i++)
{
c[i+n]=b[i];
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(c[i]>c[j])
{
k=c[i];
c[i]=c[j];
c[j]=k;
}
}
}
printf("\nThe merged array is :");
for(i=0;i<size;i++)
{
printf("%d",c[i]);
}
}

