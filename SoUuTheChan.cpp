#include <stdio.h>
int main(){
    int t; scanf("%d", &t);
    while(t--){
    long long a; scanf("%lld", &a);
    int chan = 0;
    int b; 
    int le=0 ;
    while(a!=0){
    	b=a%10;
        if(b%2==0) {
            chan++;
        } else {le++;}
        a=a/10;
    } 
	if(chan>le){printf("YES\n");
    }else  {printf("NO\n");}
    }}
