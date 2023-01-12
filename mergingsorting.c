#include<stdio.h>
void main()
{
int arr1[10],arr2[10],arr3[10],i,j,k,n1,n2;
printf("Enter the Size of the first array :");
scanf("%d",&n1);
printf("Enter the Elements of the first array :");
for(i=0;i<n1;i++)
scanf("%d",&arr1[i]);
printf("Enter the Size of the second array :");
scanf("%d",&n2);
printf("Enter the Elements of the second array :");
for(j=0;j<n2;j++)
scanf("%d",&arr2[j]);
i=0;
j=0;
k=0;
while(i<n1&&j<n2)
{
if(arr1[i]<arr2[j])
{
arr3[k]=arr1[i];
i++;
}
else if(arr1[i]>arr2[j])
{
arr3[k]=arr2[j];
j++;
}
else
{
arr3[k]=arr2[j];
j++;
i++;
}
k++;
}
while(i<n1)
{
arr3[k]=arr1[i];
i++;
k++;
}
while(j<n2)
{
arr3[k]=arr2[j];
j++;
k++;
}
printf("The Sorted array is: \n");
for(i=0;i<k;i++)
{
printf("%d",arr3[i]);
}
}

