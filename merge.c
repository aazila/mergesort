#include<stdio.h>
int main()
{
int i,j,k,a[50],n1,n2,b[100],c[150];
printf("enter size of 1st array");
scanf("%d",&n1);
printf("enter elements of first sorted array:\n");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
printf("enter the size of the second array");
scanf("%d",&n2);
printf("enter elements of second sorted array:\n");
for(j=0;j<n2;j++)
{
scanf("%d",&b[j]);
}
i=0;
j=0;
k=0;
while(i<n1&&j<n2)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
if(j>=n2)
{
while(i<n1)
{
c[k]=a[i];
i++;
k++;
}
}
if(i>=n1)
{
while(j<n2)
{
c[k]=b[j];
j++;
k++;
}
}
printf("merge sorted array \n");
for(i=0;i<n1+n2;i++)
{
printf("%d",c[i]);
}
return 0;
}
                                                                                  
