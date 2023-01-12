#include<stdio.h>
void main()
{
int n,ar[10],i;
printf("Enter the limit :\n");
scanf("%d",&n);
printf("Enter the elements \n");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
printf("Elements are ");
for(i=0;i<n;i++)
{
printf("%d\n",ar[i]);
}
}
 
