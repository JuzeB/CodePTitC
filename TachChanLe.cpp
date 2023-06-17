#include <stdio.h> 

int main(){ 
	int n; 
	scanf("%d",&n); 
	int A[100], sochan[100], sole[100]; 
	int chan = 0 , le = 0; 
	for (int i=0; i<n; i++){ 
		scanf("%d", &A[i]); 
	} 
	for (int i = 0 ; i < n ; i++){ 
		if (A[i]%2 == 0){ 
			sochan[chan] = A[i]; 
			chan++; 
		} 
		else { 
			sole[le] = A[i]; 
			le++; 
		} 
	} 
	for ( int i = 0 ; i< chan ; i++){ 
		printf("%d ", sochan[i]); 
	} 
	printf("\n"); 
	for ( int i = 0 ; i < le ; i++){ 
		printf("%d ", sole[i]); 
	} 
}
