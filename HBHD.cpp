#include<stdio.h> 
int main (){ 
	int n,k;
	scanf("%d %d", &n, &k);
	int sum=0;
	for(int i=2;i<=n;i*=2){
		sum+=n/i;
	}
	if(sum>=k){
		printf("Yes");
	}
	else{
		printf("No");
	}
return 0;
}
