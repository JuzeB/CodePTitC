#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int kt1(char c[]){
	int r,l;
	r=0;l=strlen(c)-1;
	while(r<l)
	{
		if(c[r]!=c[l])
		return(0);
		r++;
		l--;
	}
	return(1);
}
int kt2(char c[]){
	int i,sum=0;
	for(i=0;i<strlen(c);i++)
	sum+=c[i]-'0';
	if(sum%10==0)
	return(1);
	return(0);
	}
int kt3(char c[]){
	if(c[0]=='8'&&c[strlen(c)-1]=='8')
	return(1);
	return(0);
}
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char c[500];
		gets(c);
		if(kt1(c)&&kt2(c)&&kt3(c))
		printf("YES\n");
		else printf("NO\n");
	}

 }
