#include<stdio.h>
#include<math.h>
int snt(int n){
	int i;
		if(n<2) return(0);
			for(i=2;i<=sqrt(n);i++)
			if(n%i==0) return(0);
			return(1);
}
int main(){
	long long n;
	scanf("%lld",&n);
	int a[20];
	int dem=0,i,j;
	while(n>0){
		a[dem]=n%10;
		dem++;
		n=n/10;
	}
	dem--;
	int dem1;
	for(i=dem;i>=0;i--)
	if(snt(a[i])){
		dem1=1;
		for(j=i-1;j>=0;j--)
		if(a[j]==a[i]) {
			dem1++;
			a[j]=0;
		}
		printf("%d %d\n",a[i],dem1);
	}
}
