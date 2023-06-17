#include <stdio.h> 
#include <math.h> 

int check(int x,int y){ 
	while(x ^= y ^= x ^= y %= x); 
	if(y == 1) 
	return 1; 
	return 0; 
} 

int main(){ 
	int x = 0,y = 0; 
	scanf("%d%d",&x,&y); 
	for(int i = x;i < y;i++){ 
		for(int j = i + 1;j <= y;j++){ 
			if(check(i,j)==1){ 
				printf("(%d,%d)\n",i,j); 
			} 
		} 
	} 
return 0; 
}
