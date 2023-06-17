#include <stdio.h> 
#include <string.h>
 
int main(){
	int t; 
	scanf("%d",&t); 
	while(t--){ 
		char str[18]; 
		scanf("%s",str); 
		int count = 0; 
		int check = 0; 
		for(int i=0;i<strlen(str);i++){ 
			if(str[i] == '0' || str[i] == '8' || str[i] == '9'){ 
				if(count > 0){ 
					check = 1; 
					printf("0"); 
				} 
			}
			else if(str[i] == '1'){ 
				check = 1; count++; 
				printf("%c",str[i]); 
			}
			else{ 
				break; 
			} 
		} 
		if(check==0){ 
			printf("INVALID\n"); 
		}
		else{ 
			printf("\n"); 
		} 
	} 
}
