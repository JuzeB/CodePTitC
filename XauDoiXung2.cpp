#include<stdio.h>
#include<string.h>
int main(){
	char c[1000000];
	gets(c);
	printf("%ld",strlen(c)-1);
}





