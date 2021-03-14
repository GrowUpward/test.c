//求100以内奇数的和
#include <stdio.h>
int main()
{ int x=1,sum=0;
while(x<99)
{   x+=2;
   sum =sum+x;
	printf("%d ",x);
	
}
printf("\n");
printf("奇数的和为%d ",sum);
return 0;
}