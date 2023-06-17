#include<stdio.h>
int main(){
	int n,i,j,m,chot;
	scanf("%d%d",&n,&m);
	int c=m,d=1,f=1+m-n;
	if(n<=m)
	for(i=n;i>=1;i--){
		for(j=c;j>=1;j--)
		printf("%d",j);
		for(j=2;j<=d;j++)
		printf("%d",j);
		printf("\n");
		c--;
		d++;
	}
	else 
	for(i=n;i>=1;i--)
	{
		if(i>m){
		for(j=i;j>=i-m+1;j--)
		printf("%d",j);}
		else{
			for(j=i;j>=1;j--)
			printf("%d",j);
			for(j=2;j<=f;j++)
			printf("%d",j);
		}
		f++;
		printf("\n");
	}
}
