#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int prime (int n)
{ int j =0;
  for(j=2;j<n;j++)
  { if(n%j ==0)
  return 0;
  }
  return 1;

}

int main()
{
  int i;
  scanf("%d",&i);
  if( prime (i) == 1)
	  printf("yes\n",i);
  else
	  printf("no\n",i);
  return 0;
}