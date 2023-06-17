#include<stdio.h> 
void mang(int a[], int n) { 
for(int i = 0; i < n; i++) { 
scanf("%d",&a[i]);
 } 
} 
int main() { 
int n; 
int a[100]; 
scanf("%d",&n); 
mang(a,n); 
int min = a[0]; 
for(int i = 0; i < n ; i++) {
 if(min>a[i]) { 
 min=a[i]; 
 }
  } 
  printf("%d ",min);
   int min2=a[1];
    for(int i = 0; i < n ; i++) {
	 if(a[i]==min)
	  continue; 
	  if(min2>a[i]&&a[i]>min) {
	   min2=a[i]; 
	   } 
	   } 
	   printf("%d",min2);
	    }
