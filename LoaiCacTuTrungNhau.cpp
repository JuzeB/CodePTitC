#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char c[100];
	gets(c);
	int n=0;
	char a[50][50];
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	int i,j,kt;
	for(i=0;i<n;i++){
		kt=1;
		for(j=0;j<i;j++)
		if(strcmp(a[i],a[j])==0)
		{kt=0;break;
		}
		if(kt) printf("%s ",a[i]);
	}
}
