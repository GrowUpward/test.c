#include <stdio.h>
int main()
{
	//int n=0;
	////int i;
	//scanf("%d",&n);
	//while(n>0 )
	//{
	// 
	//printf("%d",n%10);
	//n=n/10;
	//}
	//
	int a,b,c,d,e,f;
	scanf("%d",&a);//1234
	b=a/1000;//1
	c=a%1000/100;//2
	d=a%1000%100/10;//3
	e=a%1000%100%10;//4
	f=e*1000+d*100+c*10+b;
	printf("%d",f);
 return 0;
}