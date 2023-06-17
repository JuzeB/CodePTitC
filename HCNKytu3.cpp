#include<stdio.h>
int main(){
	int n,i,j,m,chot;
	scanf("%d%d",&n,&m);
	for(j=1;j<=m;j++){
		if(j==1)
		printf("@");
		else printf("%c",j+63);
	}
	printf("\n");
	for(i=2;i<=n;i++){
		if(i<=m){
		
		for(j=i;j<=m;j++)
		printf("%c",j+63);
		for(j=1;j<=i-1;j++)
		printf("%c",m+63);
		printf("\n");
		chot=i;
	}
	else{
		for(j=1;j<=chot;j++)
		printf("%c",m+63);
		printf("\n");
	}
	}
}
