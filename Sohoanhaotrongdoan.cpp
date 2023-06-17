#include<stdio.h> 

int sohoanhao(int n){ 
	int shh; 
	int sum = 0; 
	shh = n; 
	for (int i=1; i<n; i++){ 
		if (n%i == 0) sum+= i; 
	} 
	if (shh == sum) printf ("%d ", shh); 
	else return 0; 
} 

int main(){ 
	int a,b; 
	scanf ("%d %d", &a, &b); 
	if (a>b){ 
		for (int i = b; i<=a; i++){ 
			sohoanhao(i); 
		} 
	} 
	else { 
		for (int i = a; i<=b; i++){ 
			sohoanhao(i); 
		} 
	} 
return 0; 
}


