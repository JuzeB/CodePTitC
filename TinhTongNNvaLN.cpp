#include<stdio.h>
#include<math.h>
long long max1(long long a){
	int t;
	long long tong=0,dem=0;
	while(a>0){
		t=a%10;
		if(t==5)
		t=6;
		dem++;
		long long b=pow(10,dem-1);
		tong=tong+b*t;
		a=a/10;
	}
	return tong;}
	long long min1(long long a){
	int t;
	 long long tong=0,dem=0;
	while(a>0){
		t=a%10;
		if(t==6)
		t=5;
		dem++;
		long long b=pow(10,dem-1);
		 tong=tong+b*t;
		a=a/10;
	}
	return tong;}
	int main(){
		int t;
		scanf("%d",&t);
		while(t--){
			long long a,b;
			scanf("%lld%lld",&a,&b);
			printf("%lld %lld\n",min1(a)+min1(b),max1(a)+max1(b));
		}
	
	}



