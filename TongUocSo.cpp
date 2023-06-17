#include<stdio.h>
#include<math.h>
 int kt(int n){ long long sum=0; for(int i=2;i<=sqrt(n);i++){ if(n%i==0){ while(n%i==0){ sum+=i; n/=i; } } } if(n>1) sum+=n; return sum; }
int main(){
    int n,i; 
    long  tong=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	tong=tong+kt(a[i]);
	printf("%ld",tong);
}





