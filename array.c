#include<stdio.h>
int main()
{
  int i,n,a[50];
 printf("to read and display an array \n");
printf("enter the size of the array");
scanf("%d",&n);
printf("read the element of array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("the elements of the array is:");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
return 0;
}

