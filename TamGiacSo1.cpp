#include<stdio.h>
#include<math.h>
int main(){
	int n,dem=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int j;
		for(j=1;j<=dem;j++)
		printf("%d",j);
		dem+=2;
		printf("\n");
	}
}

