#include<stdio.h>
#include<conio.h>
int main()
{
int first,last,mid,n,i,flag=0,a[50],x;
printf("enter the n elements:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("enter the search element:");
scanf("%d",&x);
first=1;
last=n;
if(first<=last)
{
	mid=first+last/2;
if(x==a[mid])
{
	return mid;
	printf("sucessfull search");

flag=1;
}
else if(x<a[mid])
{
	last=mid-1;
}
else
{
	first=mid+1;
}
if(flag==0)
{
	printf("\n unsucessfull search");
}
}
}
