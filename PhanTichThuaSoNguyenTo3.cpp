#include <stdio.h>
#include <math.h>
 int PTTSNT(int t, long a){
 	for(int j=1; j<=t; j++){
 	
	 scanf("%d", &a);printf("Test %d: ", j);
 	 for(int i=2; i<=sqrt(a); i++){
 	 	if(a%i==0){	
		  
 	 		int count=0;
 	 		while(a%i==0){
 	 		count++;
			a=a/i; 
		 }	 printf("%d(%d) ", i, count);
		 } 
	}if(a!=1){
 	 		printf("%d(1)", a);}
			  printf("\n");		 
}}	
int main(){
	int t; scanf("%d", &t);
	int a;
	PTTSNT(t, a);
	
}
