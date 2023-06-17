#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
	
	int n,m,k,i,j;
	scanf("%d%d%d",&n,&m,&k);
	int a[n][m];
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	if(a[i][k-1]>a[j][k-1])
	{
		int tmp=a[i][k-1];
		a[i][k-1]=a[j][k-1];
		a[j][k-1]=tmp;
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("\n");
}
}




