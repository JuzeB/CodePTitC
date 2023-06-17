#include <stdio.h> 
#include <math.h> 
#include <string.h> 
#include <stdlib.h>

int prime[1000001]; 
void sang(){ 
	for(int i=0;i<=1000000;i++) {
		prime[i]=1; 
	} 
	prime[0]=prime[1]=0; 
	for(int i=2;i<=1000;i++){ 
		if(prime[i]){ 
			for(int j=i*i;j<=1000000;j+=i){ 
				prime[j]=0; 
			} 
		} 
	} 
} 

int main(){ 
	sang() ; 
	int t; 
	scanf("%d",&t); 
	while(t--){ 
		long long l,r; 
		scanf("%lld%lld",&l,&r); 
		int c1=sqrt(l),c2=sqrt(r); 
		if (c1*c1<l) ++c1; 
		int dem=0; 
		for(int i=c1;i<=c2;i++){ 
			if(prime[i]) ++dem; 
		} 
		printf("%d",dem); 
		printf("\n"); 
	} 
}
