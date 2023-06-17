#include<stdio.h>
int main(){
    int n,i,j,tg,dem=0;
	scanf("%d",&n);
	int a[n],b[100000]={0};
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
    b[a[i]]++;}
    for(i=0;i<n;i++)
    if(b[a[i]]>1){
    	printf("%d ",a[i]);
    	b[a[i]]=1;
	}
	}

