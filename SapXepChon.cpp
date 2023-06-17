#include<stdio.h>
int main(){
	int n,i,min,j,tam;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		min=i;
		int min1=101,chot;
		for( j=i+1;j<n;j++)
		if(min1>a[j])
		{min1=a[j];
		 chot=j;
		}
		if(a[min]>a[chot]){
			tam=a[min];
			a[min]=a[chot];
			a[chot]=tam;
		}
		printf("Buoc %d: ",i+1);
		for(int i=0;i<n;i++)
		printf("%d ",a[i]);
		printf("\n");
	}	
}
	



