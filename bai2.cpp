#include <stdio.h>
#include <math.h>
int fun(int n)
{
  if (n<=1) {return 0;};
  if (n==2) {return 1;};
  for (int i=2;i<=sqrt(n);i++) {if (n-(n/i)*i==0) {return 0;};};
  return 1;
}
int foo(int n)
{
  int i=1;
  do {n=n-i;i++;} while (n>=0);
  return i-2;
}

int main()
{  
  int i=2;double t=6.00;
  printf("fun(1) = %d\n",fun(1));
  printf("fun(2) = %d\n",fun(2));
  printf("fun(5) = %d\n",fun(5));
  printf("fun(6) = %d\n",fun(6));
  printf("\n");
  printf("foo(9) = %d\n",foo(9));
  printf("foo(10) = %d\n",foo(10));
  printf("foo(11) = %lf\n",foo(11));
  return 0;
}

