#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i,dem=0;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n-1;i++)
		if(a[i]==a[i+1])
		dem++;
		printf("%d",dem);
		printf("\n");
			}
}
