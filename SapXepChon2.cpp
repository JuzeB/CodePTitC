#include<stdio.h>
#include<math.h>
int main(){
int n,j,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++){
	int min=i,tg;
	for(j=i+1;j<n;j++)
	if(a[min]>a[j])
	min=j;
	tg=a[i];
	a[i]=a[min];
	a[min]=tg;
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
}
}



