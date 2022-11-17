#include <stdio.h>
int main()
{
  int t;char s[20];
  printf("------------------BANG CUU CHUONG-------------------\n");
  for (int j=1;j<=9;j++)
  {
    for (int i=1;i<=3;i++)
      {
	t=printf(" %i x %i = %i",i,j,i*j);
	for (int i=1;i<=20-t;i++) {printf(" ");};
      }
    printf("\n");
  }
  printf("\n");
  for (int j=1;j<=9;j++)
  {
    for (int i=4;i<=6;i++)
      {
	t=printf(" %i x %i = %i",i,j,i*j);
	for (int i=1;i<=20-t;i++) {printf(" ");};
      }
    printf("\n");
  }
  printf("\n");
  for (int j=1;j<=9;j++)
  {
    for (int i=7;i<=9;i++)
      {
	t=printf(" %i x %i = %i",i,j,i*j);
	for (int i=1;i<=20-t;i++) {printf(" ");};
      }
    printf("\n");
  }
  return 0;
}
