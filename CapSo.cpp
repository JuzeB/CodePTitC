#include <stdio.h> 

int gcd(int a,int b){ 
	if(a==0){ 
		return b; 
	} 
	return gcd(b%a,a); 
} 

int main(){ 
	int t; 
	scanf("%d",&t); 
	while(t--){ 
		int a,b,c,d; 
		scanf("%d%d%d%d",&a,&b,&c,&d); 
		if(gcd(a,b)==gcd(c,d)){ 
			printf("YES"); 
		} 
		else printf("NO"); 
		printf("\n"); 
	} 
}
