#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N 10
int fun(int arr[],int n)
{
 int i,t,a[N];
 ////for(i=0;i<N/2;i++)
 ////{ t=a[i];
 ////  a[i]=a[N-1-i];
 ////  a[N-1-i]=t;
 ////}

 //for(i=9;i>=0;i--)
 //{ if(i!=0) printf(" ");//��ȡ�������һ���ո���ܻ���ɸ�ʽ����
 // }
}

int main()
{
  int a[N],i;
  for(i=0;i<N;i++) {scanf("%d",&a[i]);}
  fun(a,10); 
//for(i=0;i<N;i++)  printf("%d",a[i]);
   for(i=9;i>=0;i--)  printf("%d",a[i]);
  return 0;
}


////#include<stdio.h>
////#define N 10
////int main()
////{
////    int a[N]={0,1,2,3,4,5,6,7,8,9};
////    int i,t;
////    printf("ԭʼ������:\n");
////    for(i=0;i<N;i++)
////        printf("%d ",a[i]);
////    for(i=0;i<N/2;i++)
////    {
////        t=a[i];
////        a[i]=a[N-1-i];
////        a[N-1-i]=t;
////    }
////    printf("\n����������:\n");
////    for(i=0;i<N;i++)
////        printf("%d ",a[i]);
////    printf("\n");
////    return 0;
////}