#include"stdio.h"
#include"math.h"
int main(){
	int t; scanf("%d", &t);
	while(t--){
        int n; scanf("%d", &n);
        int tich=1;
        for(int i=2; i<=sqrt(n); i++){
     		if(n%i==0){
     			while(n%i==0){	
			    n=n/i;}
				tich=tich*i;
				} 

			} if(n!=1){ tich=tich*n;
			}
			printf("%d\n", tich);
         
}
}

	
     


