#include<stdio.h>
#include<string.h>

int main()
{
int n,i,j;
scanf("%d",&n);
   for(i=1;i<=n;i++)
   {int m=1;
   	for(j=1;j<=i;j++)
   	printf("0 ");
   	for(j=1;j<=n-i;j++)
   	printf("%d ",m++);
   	printf("\n");
   }
}




