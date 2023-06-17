#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int chot=0;
	while(chot<n-1){
		int dem=0;
		for(i=chot+1;i<n;i++)
		if(a[chot]<=a[i])
		dem++;
		if(dem==0)
		printf("%d ",a[chot]);
	chot++;
	}	
		printf("%d",a[n-1]);
		printf("\n");
	}

}
