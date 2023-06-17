#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   int max=a[0];
    int max2=a[0];
    for(i=0;i<n;i++)
    if(max<a[i])
    max=a[i];
    for(i=0;i<n;i++)
    if(max2<a[i]&&a[i]<max)
    max2=a[i];
    printf("%d %d",max,max2);
    
}
