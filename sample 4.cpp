#include<stdio.h>
main()
{
int r,i,j,a,b,c;
printf("enter r\n");
scanf("%d",&r);
a=0;b=1;
for(i=1;i<=r;i++)
{
    for(j=1;j<=i;j++)
    if(j%2==0)
printf("%d\t",b);
else
printf("%d\t",a);
printf("\n");
c=a;
a=b;
b=c;
}
}

