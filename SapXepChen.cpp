#include<stdio.h>
int main(){
	int n,i,min,j,tam;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Buoc 0: %d\n",a[0]);
	for(i=1;i<n;i++){
	printf("Buoc %d: ",i);
	int tam=a[i],j=i-1,h=i+1;
	while(tam<a[j]&&j>=0){
		a[j+1]=a[j];j--;
	}
	a[j+1]=tam;
	for(int i=0;i<h;i++)
	printf("%d ",a[i]);
	printf("\n");
	}	
}
