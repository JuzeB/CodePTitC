#include<stdio.h>
#include<math.h>
unsigned long long bcnn(unsigned long long a,unsigned long long b){
	unsigned long long t,c,d;
	c=a;d=b;
	t=b%a;
	while(t>0){
		t=a%b;
		a=b;
		b=t;
	}
	return(c*d/a);
}

int main(){
int t;
scanf("%d",&t);
while(t--){
	unsigned long long n,i,min=1;
	scanf("%llu",&n);
	for(i=1;i<=n;i++)
	min=bcnn(i,min);
	printf("%llu\n",min);
}
}



