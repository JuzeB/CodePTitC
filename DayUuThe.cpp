#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n=0,chan=0,le=0;
        char kitu=' ';
        while(kitu==' '){
        	int x;
        	scanf("%d",&x);
        	n++;
        	if(x%2==0) chan++;
        	else le++;
        	kitu=getchar();
		}
		if((n%2==0&&chan>le)||(n%2==1&&le>chan))
		printf("YES");
		else printf("NO");
		printf("\n");
	}
}




