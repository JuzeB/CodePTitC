#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int tong=0;
	for(i=0;i<n;i++)
	tong+=a[i];
	printf("%.3f",(float)tong/n);
}





