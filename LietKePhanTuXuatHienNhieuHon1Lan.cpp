#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n],b[100000]={0},c[100000]={0};
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	b[a[i]]++;
	c[a[i]]++;
	}
	int dem=0;
	for(i=0;i<n;i++)
	if(b[a[i]]>1){
		dem++;
		b[a[i]]=0;
	}
	printf("%d\n",dem);
for(i=0;i<n;i++)
	if(c[a[i]]>1){
	printf("%d ",a[i]);
	c[a[i]]=0;
	}
}
