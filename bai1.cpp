#include <stdio.h>
int epn(int n)
{
  if (n==1) {return 1;};
  return n*epn(n-1);
}
int power(int n, int m)
{
  if (m==0) {return 1;};
  int t=1;
  for (int i=1;i<=m;i++) {t*=n;};
  return t;
}
int main()
{
  int n,t=5,m;
  printf("Enter n: ");scanf("%d",&n);
  printf("\nF1(n) = %d\n",epn(n));
  printf("\nF2(n) = %d\n",(n+1)*n/2);
  printf("\nEnter m: ");scanf("%d",&m);
  printf("\nResult: %d\n",power(n,m));
  return 0;
}
