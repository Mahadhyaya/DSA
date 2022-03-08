/* Selection sort */

#include<stdio.h>
void main()
{
int a[20],i,j,n,t;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the values\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
int min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
{
min=j;
}
}
if(min!=i)
{
t=a[i];
a[i]=a[min];
a[min]=t;
}
}
printf("After sorting\n");
for(i=0;i<n;i++)
printf("%2d",a[i]);
}
