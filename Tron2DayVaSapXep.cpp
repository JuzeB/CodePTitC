#include<stdio.h>
#include<math.h>
int main(){
	int t,k=1;
	scanf("%d",&t);
	while(t--){
		int i,n,j,tg;
		scanf("%d",&n);
		int a[n],b[n];
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		scanf("%d",&b[i]);
		for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		if(a[i]>a[j])
		{tg=a[i];
		a[i]=a[j];
		a[j]=tg;
		}
		for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		if(b[i]<b[j])
		{tg=b[i];
		b[i]=b[j];
		b[j]=tg;
		}
		printf("Test %d:\n",k);
		k++;
		for(i=0;i<2*n;i++)
		if(i%2==0)
		printf("%d ",a[i/2]);
		else printf("%d ",b[i/2]);
		printf("\n");
			}
}



