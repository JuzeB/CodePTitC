#include<stdio.h>
#include<string.h>
int main(){
		int i,dem1=0,dem2=0;
		char xau[200];
		gets(xau);
	for(i=0;i<=strlen(xau);i++){
	if(xau[i]>='A'&&xau[i]<='Z')
	dem1++;
	if(xau[i]>='a'&&xau[i]<='z')
	dem1++;
	}
	for(i=0;i<=strlen(xau);i++)
	if(xau[i]>='0'&&xau[i]<='9')
	dem2++;
	printf("%d %d %d",dem1,dem2,strlen(xau)-dem1-dem2);
	}
