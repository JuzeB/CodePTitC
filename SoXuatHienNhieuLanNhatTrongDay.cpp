#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int n,i;
	scanf("%d",&n);
	int a[n],b[100000]={0};
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	b[a[i]]++;
	}
	int max=1;
	for(i=0;i<n;i++)
	if(max<b[a[i]])
	max=b[a[i]];
	for(i=0;i<n;i++)
	if(b[a[i]]==max)
	{
		printf("%d ",a[i]);
		b[a[i]]=0;
	}
	printf("\n");
	}
}




