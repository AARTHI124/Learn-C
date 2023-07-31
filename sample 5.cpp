#include <stdio.h>
int main()
{
  int r,j,i,k;
  printf("enter r\n");
  scanf("%d",&r);
  for(i=1;i<=r;i++)
  {
      k=i;
      for(j=1;j<=i;j++)
      printf("%d\t",k++);
      printf("\n");
  }
}

