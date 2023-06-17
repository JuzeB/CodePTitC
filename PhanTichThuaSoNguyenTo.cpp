#include<stdio.h> 
#include<math.h> 
#define ll long long 
void pt(ll n){
    for(ll i=2;i<=sqrt(n);i++){
	 if(n%i==0) { int dem=0;
	  while(n%i==0){
	   dem++; n/=i; }
	    printf("%lld^%d",i,dem);
		 if(n!=1) printf(" * "); } 
		 } if(n!=1){ printf("%lld^1",n); 
		 } 
 }int main() {
		  int t; scanf("%d",&t);
		  for(int j=1;j<=t;j++){ ll n;
		    scanf("%lld",&n);
		    printf("%d = ",n); pt(n);
			printf("\n");
	 } 
}
