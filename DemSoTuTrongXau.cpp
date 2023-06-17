#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
    getchar();
	while(t--){
		int i,dem=1;
		char xau[200];
		gets(xau);
		for(i=0;i<strlen(xau)-1;i++)
		if(xau[i]==' '&&xau[i+1]!=' ')
		dem++;
		printf("%d\n",dem);
	}
}
