#include <stdio.h> 

void in(int n, int x, int k) { 
	if (n==0) { 
	printf("%d ", x); 
	return; 
	} 
	for (int i=k;i<=9;i++) { 
		in(n-1,x*10+i,i); 
	} 
} 

int main() { 
	int n,a; 
	scanf("%d", &a); 
	for (int u=1;u<=a;u++) { 
		scanf("%d",&n); 
		for (int i=1;i<=9;i++) { 
			in(n-1,i,i); 
		} 
	printf("\n"); 
	} 
}
