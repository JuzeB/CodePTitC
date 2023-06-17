#include<stdio.h> 
int main() { 
int n; 
scanf( "%d", &n ); 
int i=2; 
while(n!=1) { 
if (n%i==0) { 
printf("%d",i); 
if(n/i!=1) { 
printf("x"); 
} 
n=n/i;
} 
else { 
i++; 
} 
} 
return 0; 
}
