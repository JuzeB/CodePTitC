#include <stdio.h> 
#include <math.h> 

int check1(int n){
	while(n!=0){ 
		if(n%10==4) 
		return 0; 
		n /= 10; 
	} 
	return 1; 
} 

int check2(int n){ 
	int sum=0; 
	while(n!=0){ 
		sum += n%10; 
		n /=10 ; 
	} 
	return sum%10==0; 
} 

int check3(int n){ 
	int cst=n; 
	int sum=0; 
	while (n!=0) { 
		sum = sum*10 + n%10; 
		n /= 10; 
	} 
	return sum==cst; 
} 

int main(){ 
	int t; 
	scanf("%d",&t); 
	while(t--){ 
		int n; 
		scanf("%d",&n); 
		for(int i=pow(10,n-1);i<pow(10,n);i++){ 
			if((check1(i)==1)&&(check2(i)==1)&&(check3(i)==1)) printf("%d ",i); 
		} 
		printf("\n"); 
	} 
}
