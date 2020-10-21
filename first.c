#include<stdio.h>
int main()
{
 int n,i,j;
 printf("enter the limit:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
   for(j=0;j<(n-5)+i;j++)
     {
        printf("*");
      }
  printf(" \n")*i;
  }
 for(i=0;i<n+1;i++)
  {
   for(j=0;j<n-i;j++)
     {
        printf("*");
      }
  printf(" \n");
  }

}
