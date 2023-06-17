#include<stdio.h>
int main(){
	int n,i,min,j,tam;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		min=i;
		for( j=i+1;j<n;j++)
		if(a[min]>a[j]){
			tam=a[min];
			a[min]=a[j];
			a[j]=tam;
		}
		printf("Buoc %d: ",i+1);
		for(int i=0;i<n;i++)
		printf("%d ",a[i]);
		printf("\n");
	}	
}
	



