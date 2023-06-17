#include <stdio.h>
 int giam(int n) { 
 while(n>=10) {
  int a=n%10;
   if(a>=(n/10)%10)
   return 0; n/=10; }
    return 1; }
	 int main() 
	 { int t;
	  scanf("%d",&t);
	   while(t--) { 
	   int a,b;
	    scanf("%d%d",&a,&b);
		 int dem = 0;
		  if(a<=b) {
		  int i; 
		  for(i=a;i<=b;i++) { 
		  if(giam(i)==1) 
		  dem++; } 
		  } 
		  printf("%d\n",dem); } }
