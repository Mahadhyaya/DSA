/* Bubble sort */

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
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("After sorting\n");
for(i=0;i<n;i++)
printf("%2d",a[i]);
}
