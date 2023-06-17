#include"stdio.h"
#include"math.h"
 int snt(int n){
 	int j;
 	if(n<2) { return 0;}
    for( j=2; j<=sqrt(n); j++)
     		if(n%j==0) return 0;
			 
			 return 1;
			 
		 }
  
 int main(){
 	int a;
 	scanf("%d", &a);
 	for(int i=2; i<=a; i++){
 		if(snt(i)){
 			printf("%d\n", i);
		 }
	 }
}
 	   
 	
 
 
	
    
	

