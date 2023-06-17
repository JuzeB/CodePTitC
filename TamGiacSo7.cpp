#include<stdio.h>
#include<math.h>
int main(){
	int n,dem=2;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	int j;
	printf("%d ",i);
	int tmp=i,k=n-1;
	for(j=2;j<=i;j++){
		tmp+=k;
		printf("%d ",tmp);
		k--;
	}
	printf("\n");
	}
}





