#include<stdio.h>
void main()
{
int n,ar[10],i,num,pos;
printf("Enter the limit");
scanf("%d",&n);
printf("Enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
printf("Enter the element you want to insert");
scanf("%d",&num);
printf("Enter the position ");
scanf("%d",&pos);
if(pos<10)
{
for(i=n-1;i>=pos-1;i--)
{
ar[i+1]=ar[i];
}
ar[pos-1]=num;
printf("After insertion elements are ");
for(i=0;i<n+1;i++)
{
printf("%d\n",ar[i]);
}
}
else 
{
printf("Memory full");
}
}
