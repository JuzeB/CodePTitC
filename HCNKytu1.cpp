#include<stdio.h>
int main(){
	int n,m,i,j,max1;
	scanf("%d%d",&n,&m);
	if(n>m) max1=n;
	else max1=m;
	for(i=1;i<=n;i++){
		char max2=max1+96;
		for(j=1;j<=m;j++)
		if(i>j)
		printf("%c",max2--);
		else printf("%c",max2);
		printf("\n");
	}
}
