#include<stdio.h>
int main(){
	int n,i,j,m,chot;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++){
		if(i<=m){
		for(j=i;j>=2;j--)
			printf("%d",j);
			for(j=1;j<=m-i+1;j++)
			printf("%d",j);
		}
		else {
			for(j=i;j>=i-m+1;j--)
			printf("%d",j);
		}
		printf("\n");
	}
}
