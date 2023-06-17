#include<stdio.h>
#include<math.h>


int main(){
int t;
scanf("%d",&t);
while(t--){
	long long n,i,max1,max2;
	scanf("%lld",&n);
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0) n=n/i;
			max1=i;
		}
	}
	if(n!=1)max2=n;
	if(max1<max2) printf("%lld\n",max2);
	else printf("%lld\n",max1);	}
	
}



