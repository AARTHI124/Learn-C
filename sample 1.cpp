#include<stdio.h>
main()
{
int r,s,i,j;
printf("enter r\n");
scanf("%d",&r);
s=1;
for(i=1;i<=r;i++)
{
    for(j=1;j<=i;j++)
printf("%d\t",s);
printf("\n");
}
}

