#include <stdio.h> 

int main() { 
	unsigned j,i,a,x,gt[10]={1,1,2,6,24,120,720,5040,40320,362880}; 
	scanf("%u",&a); 
	if(a>3265920) a=3265920; 
	for(i=1;i<a;i++) {
		x=0; 
		for(j=i;j>0&&x<=i;j/=10) x+=gt[j%10]; 
		if(x==i) printf("%u ",i); 
	} 
}
