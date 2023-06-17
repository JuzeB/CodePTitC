#include <stdio.h> 
#include <math.h> 
main(void){ 
int n;
 scanf("%d",&n);
  for(int i = 0;i < n;i++){
   for(int j = 0;j < i+1;j++){ 
   int x = 1; 
   for(int k = 1;k <= i;k++){ 
   x *= k; } 
   int y = 1; 
   for(int k = 1;k <= j;k++){ 
   y *= k; }
    int z = 1; 
	for(int k = 1;k <= i - j;k++){
	 z *= k;
	  } 
	  int pascal = x/(y*z);
	   printf("%4d",pascal);
	    }
		 printf("\n"); 
		 } 
		 }
