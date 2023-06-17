#include<stdio.h> 

int main(){ 
	int n; 
	scanf("%d",&n); 
	int a=0,b=1; 
	int i; 
	printf("0 "); 
	for(i=0;i<n-1;i++){ 
		int c=a+b; 
		b=a; 
		a=c; 
		printf("%d ",c);
	} 
}
