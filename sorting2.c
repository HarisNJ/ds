#include<stdio.h>
void main()
{
int m,n,a[10],b[10],c[20],i,j,t,k=0;
printf("enter te size of the array:");
scanf("%d",&m);
printf("enter array elements:");
for(i=0;i<m;i++)
scanf("%d",&a[i]);
printf("enter the size of array b:");
scanf("%d",&n);
printf("enter array elements:");
for(i=0;i<n;i++)
scanf("%d",&b[i]);
for(i=0;i<m;i++)
for(j=i+1;j<m;j++)
if(a[i]>a[j])
{
	t=a[i];
	a[i]=a[j];
	a[j]=t;
}
for(i=0;i<n;i++)
for(j=i+1;j<m;j++)
if(b[i]>b[j])
{
	t=b[i];
	b[i]=b[j];
	b[j]=t;
}
i=j=0;
while(i<m&&j<n)
{
if(a[i]<=b[j])
{
c[k]=a[i];
i++;
k++;
}
else
{
c[k]=b[j];
j++;
k++;
}
}
while(i<m)
{
c[k]=a[i];
k++;
i++;
}
while(j<n)
{
c[k]=b[j];
k++;
j++;
}
printf("\nArray a:");
for(i=0;i<m;i++)
printf("%d",a[i]);
printf("\nArray b:");
for(i=0;i<n;i++)
printf("%d",b[i]);
printf("\nArray c:");
for(i=0;i<m+n;i++)
printf("%d",c[i]);
}

