#include<stdio.h>
#include<string.h>

int main()
{
	int n,i,m,t;
	scanf("%d",&n);
	int c[100];
	m=0;
	if(n==0)
	{
		printf("0");
		return(0);
	}
	while(n>0){
		t=n%2;
		c[m]=t;
		n=n/2;
		m++;
	}
	for(i=m-1;i>=0;i--)
	printf("%d",c[i]);
}





