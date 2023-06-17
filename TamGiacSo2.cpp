#include<stdio.h>
#include<math.h>
int main(){
	int n,dem=1,dem1=2;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int j;
		if(i%2==1){
		for(j=1;j<=dem;j++)
		if(j%2==1)
		printf("%d",j);}
		else{
		for(j=1;j<=dem1;j++)
		if(j%2==0)
		printf("%d",j);
		}
		dem+=2;
		dem1+=2;
		printf("\n");
	}
}

