#include <stdio.h> 
#include <string.h> 

char check(char s[20]) { 
	char i,len=strlen(s)-1,len2=len/2; 
	if(s[0]<s[len]) { 
		i=s[0]; 
		s[0]=s[len]; 
		s[len]=i; 
	} 
	if(s[0]-s[len]!=s[len]-48) 
	return 0; 
	for(i=1;i<len2;i++) 
	if(s[i]!=s[len-i]) 
	return 0; 
	return 1; 
} 

int main() { 
	short t; 
	char s[20]; 
	scanf("%hd",&t); 
	while(t--) { 
		scanf("%s",s); 
		if(check(s)) printf("YES\n"); 
		else printf("NO\n"); 
	} 
}
