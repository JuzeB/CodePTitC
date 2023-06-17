#include<stdio.h>
#include<string.h>
int main(){
	int i,n,m,chot1=0,chot2;
	char a[100],b[100];
	gets(a);
	gets(b);
    char *token=strtok(a," ");
    while(token!=NULL){
    	if(strcmp(b,token)!=0)
    	printf("%s ",token);
    	token=strtok(NULL," ");
	}
	}

