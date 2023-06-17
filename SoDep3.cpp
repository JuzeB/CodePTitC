#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int snt(int n){
	int i;
	if(n<2) return(0);
	for(i=2;i<=sqrt(n);i++)
	if(n%i==0) return(0);
	return(1);
}
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
	int i,tmp;
	for(i=0;i<strlen(c);i++){
	tmp=c[i]-'0';
	if(snt(tmp)==0) return(0);
	}
	return(1);
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
		if(kt1(c)&&kt2(c))
		printf("YES\n");
		else printf("NO\n");
	}
}





