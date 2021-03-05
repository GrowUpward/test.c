
#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//void  fun(char s[],int num)
//{
//	/********** Begin **********/
//	
//    int i;
//	for(i=0;i<7;i++)//7趟（i从0开始）
//	{ int j=0;
//	  for(j=0;j<7-i;j++)//for(j=i+1;j<7;j++)
//	  { if(s[j]<s[j+1]) //if(s[j]>s[i])
//	    { char t = s[j];//char t=s[i];
//           s[j]=s[j+1];// s[i]=s[j];
//		   s[j+1]=t;//   s[j]=t;
//	      }
//	  
//	  }
//	}
//	 
//}    


//
//int main()
//{
//	char s[10];
//	printf("输入8个字符的字符串:");
//	gets(s);
//	fun(s,8);
//	printf("%s\n",s);
//	return 0;
//}

//#include<stdio.h>
//main()
//{   char a,b,c,max,min;
//    while(scanf("%c%c%c",&a,&b,&c)!=EOF)
//    {
//        max=(a>b?a:b)>c?(a>b?a:b):c;
//        min=(a<b?a:b)<c?(a<b?a:b):c;
//          printf("%c %c %c\n",min,a+b+c-min-max,max);
//    }


//插入一个数后排序
//#include <stdio.h>
//int main()
//{  int a[11]={1,4,6,9,11,25,31,46,83,100};
//   int m,i;
//   scanf("%d",&m);
//   if(m<=a[0])
//   { a[i+1]=a[i];
//     a[0]=a[i];
//   }
//   else if(m>=a[10])
//	   a[11]=m;
//   else 
//	   for(i=9;i>=0;i--)
//	   {   if(m<a[i])
//	         a[i+1]=a[i];
//	      else 
//		     a[i+1] = m;
//             break; 
//	   }
//
//
//  for(i=0;i<11;i++)
//    {
//
//        printf("%d\t",a[i]);              
//     }
//
//
// return 0;
//}
//

#include<stdio.h>
int main()
{                
    int a[11]={1,4,6,9,11,25,31,46,83,100};

    int temp,i=0;

    scanf("%d",&temp);

    for(i=9;i>=0;i--)
    {
       if(temp<=a[i])
	   {
            a[i+1] = a[i];
			a[i]=temp;

       }
	   else{
             a[i+1] = temp;
             break;      
       }

    }

    for(i=0;i<11;i++)
    {

        printf("%d ",a[i]);              
     }


    system("pause"); 
    return 0;
}