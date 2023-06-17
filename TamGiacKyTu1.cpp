#include<stdio.h>
#include<math.h>
int main(){
	int n,dem=1,dem1=2;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	int j;int tmp,dem2=dem;
	if(i%2==1)
	for(j=i;j>=1;j--){
		tmp=dem2-j+1;
		printf("%c ",tmp+96);
	}
	 else 
	 for(j=1;j<=i;j++){
	 	tmp=dem2--;
	 	printf("%c ",tmp+96);
	 }
	 dem=dem+dem1;
	 dem1++;
	 
	 printf("\n");
	 
}

}





