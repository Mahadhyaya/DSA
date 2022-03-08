/* Linear Search */

#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[10],n,i,s;
printf("Enter the No.of elements\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the search element\n");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(a[i]==s)
{
printf("Element found at %d",i+1);
exit(0);
}
}
printf("Element not found\n");
}
