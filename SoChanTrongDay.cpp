#include<stdio.h> 

int main(){ 
	int b; 
	scanf("%d",&b); 
	while(b--){ 
		int n; 
		scanf("%d",&n); 
		unsigned a[n],i; 
		for(i=0;i<n;i++){ 
			scanf("%d",&a[i]); 
		}
		for(i=0;i<n;i++){ 
			if(a[i]%2==0) printf("%d ",a[i]);
		}
	printf("\n");
	}	
} 
