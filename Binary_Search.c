/* Binary Search */

#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[10],n,i,low,high,mid,key;
printf("Enter the No. of elements\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
printf("Enter the key elements\n");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(key==a[mid])
{
printf("Item found at %d",mid);
exit(0);
}
else if(key<a[mid])
{
high=mid-1;
}
else
{
low=mid+1;
}
}
printf("Element not found\n");
}
