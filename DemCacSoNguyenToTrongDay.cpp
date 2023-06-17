#include<stdio.h>
#include<math.h>
int snt(long a){		
	if(a==1)
	return(0);
	if(a==2)
	return(1);
	for(long i=2;i<=sqrt(a);i++)
	if(a%i==0) 
	return(0);
	return(1);
	}
int main(){
	int t,dem=1;
	scanf("%d",&t);
	while(t--){
    int n,i,j,tg;
	scanf("%d",&n);
	int a[n],b[100000]={0};
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
    b[a[i]]++;}
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    if(a[i]>a[j])
    {
    	tg=a[i];
    	a[i]=a[j];
    	a[j]=tg;
	}
    printf("Test %d:",dem);
    printf("\n");
    for(i=0;i<n;i++)
    if(b[a[i]]>0&&snt(a[i]))
    {
    	printf("%d xuat hien %d lan",a[i],b[a[i]]);
    	printf("\n");
    	b[a[i]]=0;
	}
	dem++;
	}
}
