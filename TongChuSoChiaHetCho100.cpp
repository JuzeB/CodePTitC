#include"stdio.h"
#include"math.h"
 int tong(int n){
     int sum=0;
     while(n!=0){
          int a=n%10;
		  sum+=a;
		  n=n/10;	
	 } if(sum%10==0){ return 1;
	 }
	 return 0;
 } 
 int main(){
 	int t; scanf("%d",&t);
 	while(t--){
 	int n;
 	scanf("%d", &n);
 	int b=tong(n);
 	if(b==1){printf("YES\n");
	 } else{printf("NO\n");
	 }
 }}
 	   
 	
 
 
	
    
	


