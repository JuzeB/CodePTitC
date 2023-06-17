#include <stdio.h> 
#include <math.h> 

int checkle(long long n){ 
	while(n!=0){ 
		if(n%2!=0) 
		return 1; 
		n/=10; 
	} 
} 

int checktong(long long n){ 
	int sum=0; 
	while(n!=0){ 
		sum+=n%10; n/=10; 
	} 
	if(sum%2!=0) 
	return 1; 
	return 0; 
} 

int thuannghich(long long n){ 
	long long rev =0,a=n; 
	while(n!=0){ 
		rev=rev*10 + n%10; 
		n/=10; 
	}
	if(rev==a) 
	return 1; 
	return 0; 
} 

int main(){ 
	int t; 
	scanf("%d",&t); 
	while(t--){ 
		long long n; 
		scanf("%lld",&n); 
		if(checkle(n) && checktong(n) && thuannghich(n)) printf("YES\n"); 
		else printf("NO\n"); 
		printf("\n"); 
	} 
	return 0; 
}
