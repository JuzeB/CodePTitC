#include<stdio.h>
#include<math.h>
int main(){
	int n,dem=2;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	int j;
	printf("@");
	for(j=2;j<=dem-2;j++)
	if(j%2==0)
	printf("%c",j+64);
	for(j=dem-4;j>=2;j--)
	if(j%2==0)
	printf("%c",j+64);
	if(dem!=2)
	printf("@");
	printf("\n");
	dem+=2;
	}
}





