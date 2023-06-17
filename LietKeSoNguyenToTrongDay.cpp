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
    int n,i,dem=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    
   
    
    for(i=0;i<n;i++)
    if(snt(a[i]))
    dem++;
    printf("%d ",dem);
    	 for(i=0;i<n;i++)
    if(snt(a[i]))
    printf("%d ",a[i]);
    
}
