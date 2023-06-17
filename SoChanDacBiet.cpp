#include<stdio.h> 

int check1(long long int m) { 
	int b,c=0; 
	while(m!=0) { 
		b=m%10; 
		m/=10; 
		c++; 
	}
return c; 
} 

int check(long long int n) { 
	int i,j=0; 
	while(n!=0) { 
	i=n%10; 
	n/=10; 
	if(i%2==0) j++; 
	}
return j; 
} 

int main() { 
	int t; 
	scanf("%d",&t); 
	while(t--) { 
		long long int a; 
		scanf("%lld",&a); 
		if(check1(a)==check(a)&&a%2==0) printf("YES\n"); 
		else printf("NO\n"); 
	}
}
