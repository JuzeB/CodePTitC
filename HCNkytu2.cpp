#include <stdio.h> 

int main() { 
	int a,b; 
	scanf("%d %d",&a,&b); 
	char ta='A'+a-1; 
	char tb='A'+b-1; 
	for (char i = 'A'; i <=ta ; i++) { 
		for (char j=i; j <=tb; j++) { 
			printf("%c",j); } 
			if (i<=tb) {
				for (char l = i-1; l>'A'-1; l--) { 
					printf("%c",l); 
				} 
			} 
			else { 
				printf("%c",tb); 
				for (char l = tb-1; l>'A'-1; l--) { 
					printf("%c",l); 
				} 
			} 
			printf("\n"); 
		} 
	}
