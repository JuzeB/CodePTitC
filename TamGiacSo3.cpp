#include<stdio.h>
#include<math.h>
int main(){
	int n,dem=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	int j;
	for(j=1;j<=dem;j++)
	if(j%2==1)
	printf("%d",j);
	for(j=dem-2;j>=1;j--)
	if(j%2==1)
	printf("%d",j);
	printf("\n");
	dem+=2;
	}
}
