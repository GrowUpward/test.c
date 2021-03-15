////9*9乘法表正序
//#include <stdio.h>
//int main()
//{ int i=1,j=1;
//  for(i=1;i<=9;i++)
//  { for(j=1;j<=i;j++)
//   { printf("%d*%d=%-3d",j,i,i*j);
//   }
//   printf("\n");
//  }
//return 0;
//}
//9*9乘法表倒序
#include <stdio.h>
int main()
{ int i=1,j=1;
  for(i=9;i>=1;i--)
  { for(j=1;j<=i;j++)
   { printf("%d*%d=%-3d",j,i,i*j);
   }
   printf("\n");
  }
return 0;
}