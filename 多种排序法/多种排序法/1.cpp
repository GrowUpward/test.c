#define _CRT_SECURE_NO_WARNINGS 1
//ð����������
//#include <stdio.h>
//int main()
//{ 
//  int a[10],i,j,t;
//  printf("������10������\n");
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
//����������2.0(����Щ���Ѿ��ź�ʱ�Ͳ���Ҫ�������Ƚ�)
//#include <stdio.h>
//int main()
//{ 
//  int a[10],i,j,t,flag;
//  printf("������10������\n");
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
///����������3.0
//#include <stdio.h>
//#define n 10
//int main()
//{ 
//  int a[10],i,j,t;
//  int sign =0;
//  printf("������10������\n");
//  for(i=0;i<n;i++)
//  {scanf("%d",&a[i]);
//  }
//
//   printf("\n");
//   for(i=0;i<n-1;i++)
//   {  for(j=0;j<n-1-i;j++)
//      { if(a[sign]<a[j])
//         { sign = j;//��sign���ҵ������Ǹ���
//          }
//      }
//      t=a[j];
//	  a[j]=a[sign];//�������Ǹ����ŵ����
//	  a[sign]=t;
//   }
//   for(j=0;j<n;j++)
//	   printf("%d ",a[j]);
//  
//return 0;
//}
////ѡ��
//#include <stdio.h>
//int main()
//{ 
//  int a[10],i,j,t;
//  printf("������10������\n");
//  for(i=0;i<10;i++)
//  {scanf("%d",&a[i]);
//  }
//   printf("\n");
//   for(i=0;i<9;i++)//i�ķ�ΧΪǰ9����
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
