#define _CRT_SECURE_NO_WARNINGS 1
/*#include <stdio.h>
void main()
{
  float x =0;
  float  y =0;
  scanf("%f",&x);
  if(x<0 && x!=-3)
	  y=x*x+x-6;
  else if(x>=0 && x<10 && x!=2 && x!=3)
	  y=x*x-5*x+6;
  else 
	  y=x*x-x-1;

  printf("%.3f",y);

}*/
#include <stdio.h>
int main()
{
  int x;
  scanf("%d",&x);
  if(x>=90 && x<=100)
	  printf("A\n");
  else if(x>=80 && x<90)
      printf("B\n");
  else if (x>=70 && x<80)
	    printf("C\n");
  else if(x>=60 && x<70) 
	  printf("D\n");
  else if(x>=0 && x<60) 
	  printf("E\n");
  else
	  printf("Score is error!");
}