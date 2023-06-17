#include<stdio.h>
#include<math.h>
 
int SHH(int n)
{
  int tong = 1;
  for(int i = 2; i <= sqrt(n); i++)
  {
    if(n % i == 0)
      tong += i + n / i;
  }
  if(sqrt(n) == (int)sqrt(n))
    tong -= sqrt(n);
  if(tong == n && n != 1)
    return 1;
  else
    return 0;
}
 
main()
{
  int T = 1;
  //scanf("%d", &T);
  while(T--)
  {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
      if(SHH(i) == 1)
        printf("%d ", i);
        //printf("\n");
    }
    //printf("\n\n");
  }
}
