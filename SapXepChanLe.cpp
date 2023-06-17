#include<stdio.h>
#include<math.h>
int main(){
	
	int n,i,j,tg,chot;
	scanf("%d",&n);
	int a[n],b[100],c[100];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    int dem1=0,dem2=0;
    for(i=0;i<n;i++){
    if(a[i]%2==0){
    	b[dem1]=a[i];
    	dem1++;}
    	else{
    		c[dem2]=a[i];
    		dem2++;
		}
	}
	for(i=0;i<dem1-1;i++)
	for(j=i+1;j<dem1;j++)
	if(b[i]>b[j]){
		tg=b[i];
		b[i]=b[j];
		b[j]=tg;
	}
	for(i=0;i<dem2-1;i++)
	for(j=i+1;j<dem2;j++)
	if(c[i]>c[j]){
		tg=c[i];
		c[i]=c[j];
		c[j]=tg;
	}
	for(i=0;i<dem1;i++)
	printf("%d ",b[i]);
	for(i=0;i<dem2;i++)
	printf("%d ",c[i]);
}
	



