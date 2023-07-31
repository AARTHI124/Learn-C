#include<stdio.h>
main()
{
int r,i,j;
printf("enter r\n");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
    for(j=1;j<=i;j++)
printf("%d\t",i);
printf("\n");
}
}

