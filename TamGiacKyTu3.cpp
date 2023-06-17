#include<stdio.h>
#include<math.h>
int main(){
	int n,dem=2;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	int j;
	printf("%c ",i+64);
	int tmp=i,k=n-1;
	for(j=2;j<=i;j++){
		tmp+=k;
		printf("%c ",tmp+64);
		k--;
	}
	printf("\n");
	}
}





