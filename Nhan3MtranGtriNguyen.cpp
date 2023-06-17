#include<stdio.h>
#include<string.h>

int main()
{
	int m,n,p,q,i,j,k;
	scanf("%d%d%d%d",&m,&n,&p,&q);
	int A[m][n],B[n][p] ,C[p][q],D[m][p],E[m][q];
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	scanf("%d",&A[i][j]);
	
	for(int i=0;i<n;i++)
	for(int j=0;j<p;j++)
	scanf("%d",&B[i][j]);
	
	for(int i=0;i<p;i++)
	for(int j=0;j<q;j++)
	scanf("%d",&C[i][j]);
	
	 for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            D[i][j] = 0; 
            for (k = 0; k < n; k++) 
                D[i][j] += A[i][k] * B[k][j]; 
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
        	E[i][j]=0;
            for (k = 0; k < p; k++) 
                E[i][j] += D[i][k] * C[k][j]; 
        }
    }
	
	for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
        	printf("%d ",E[i][j]);}
        	printf("\n");
}
}




