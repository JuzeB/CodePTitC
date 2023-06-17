#include<stdio.h> 

int tcn(int a){ 
	int s=0; 
	while(a>0){ 
		s=s+a%10; 
		a=a/10; 
	} 
return s; 
} 

int main(){ 
	int n,m,i,j,d; 
	scanf("%d %d",&n,&m); 
	if(tcn(m)<tcn(n)) printf("%d %d",m,n); 
	else printf("%d %d",n,m); 
}
