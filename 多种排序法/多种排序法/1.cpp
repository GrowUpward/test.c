#define _CRT_SECURE_NO_WARNINGS 1
//冒泡排序（升序）
//#include <stdio.h>
//int main()
//{ 
//  int a[10],i,j,t;
//  printf("请输入10个数：\n");
//  for(i=0;i<10;i++)
//  {scanf("%d",&a[i]);
//  }
//
//   printf("\n");
//   for(i=0;i<9;i++)
//   {  for(j=0;j<9-i;j++)
//      { if(a[j]>a[j+1])
//         {t=a[j];
//         a[j]=a[j+1];
//         a[j+1]=t;
//        }
//      }
//   }
//   for(j=0;j<10;j++)
//	   printf("%d ",a[j]);
//  
//return 0;
//}
//排序升级版2.0(当这些数已经排好时就不需要再两两比较)
//#include <stdio.h>
//int main()
//{ 
//  int a[10],i,j,t,flag;
//  printf("请输入10个数：\n");
//  for(i=0;i<10;i++)
//  {scanf("%d",&a[i]);
//  }
//   flag=0;
//   printf("\n");
//   for(i=0;i<9;i++)
//   {  for(j=0;j<9-i;j++)
//      { if(a[j]>a[j+1])
//         {t=a[j];
//         a[j]=a[j+1];
//         a[j+1]=t;
//		 flag=1;
//        }
//    if(flag==0) break;
//      }
//   }
//   for(j=0;j<10;j++)
//	   printf("%d ",a[j]);
//  
//return 0;
//}
///排序升级版3.0
//#include <stdio.h>
//#define n 10
//int main()
//{ 
//  int a[10],i,j,t;
//  int sign =0;
//  printf("请输入10个数：\n");
//  for(i=0;i<n;i++)
//  {scanf("%d",&a[i]);
//  }
//
//   printf("\n");
//   for(i=0;i<n-1;i++)
//   {  for(j=0;j<n-1-i;j++)
//      { if(a[sign]<a[j])
//         { sign = j;//用sign来找到最大的那个数
//          }
//      }
//      t=a[j];
//	  a[j]=a[sign];//将最大的那个数放到最后
//	  a[sign]=t;
//   }
//   for(j=0;j<n;j++)
//	   printf("%d ",a[j]);
//  
//return 0;
//}
////选择法
//#include <stdio.h>
//int main()
//{ 
//  int a[10],i,j,t;
//  printf("请输入10个数：\n");
//  for(i=0;i<10;i++)
//  {scanf("%d",&a[i]);
//  }
//   printf("\n");
//   for(i=0;i<9;i++)//i的范围为前9个数
//   {  for(j=i+1;j<10;j++)
//      { if(a[i]>a[j])
//         {t=a[j];
//         a[j]=a[i];
//         a[i]=t;
//        }
//    
//      }
//   }
//   for(j=0;j<10;j++)
//	   printf("%d ",a[j]);
//  
//return 0;
//}
