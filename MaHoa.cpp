#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char c[101];
		gets(c);
		int i=0;
		while(i<strlen(c)){
		int dem=0;
		printf("%c",c[i]);
		dem++;
		for(int j=i+1;j<strlen(c);j++)
		if(c[i]==c[j])dem++;
		printf("%d",dem);
		
		i=i+dem;
	}
	printf("\n");
}
}




