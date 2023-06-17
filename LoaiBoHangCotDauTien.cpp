 #include<stdio.h>
 #include<math.h>
 int main(){
 int t,dem=1;
 scanf("%d",&t);
 while(t--){
 	int m,n,i,j;
 	scanf("%d%d",&n,&m);
 	int a[n][m];
 	for(i=0;i<n;i++)
 	for(j=0;j<m;j++)
 	scanf("%d",&a[i][j]);
 	printf("Test %d:\n",dem);
 	for(i=1;i<n;i++)
 	{
 		for(j=1;j<m;j++)
 		printf("%d ",a[i][j]);
 		printf("\n");
	 }
	 dem++;
	 printf("\n");
 }
 }
