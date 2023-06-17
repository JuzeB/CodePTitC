#include<stdio.h>
#include<math.h>
void swap(int *a,int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
int main(){
	int n,i,j;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	scanf("%d %d",&a[i],&b[i]);
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	if(a[i]>a[j]){
		swap(&a[i],&a[j]);
		swap(&b[i],&b[j]);
	}
	int time=0;
	for(i=0;i<n;i++)
	time=fmax(time,a[i])+b[i];
	printf("%d",time);
}



