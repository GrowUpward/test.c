#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define PI 3.14
int main()
{
    float r=0.0,S=0.0,C=0.0;
	
	printf("please input r:",r);
	scanf("%f",&r);
	S=PI*r*r;
	C=PI*2*r;
	printf("S=%f\nC=%f\n",S,C);
return 0;
}
//#include <stdio.h>
//int main()
//{
//	float r1 =0,r2=0,d=0,R1,R;
//	float R2=0;
//	printf("������ҩƷ�ѡ���λ��/�졢סԺ����:");
//	scanf("%f %f %f",&r1,&r2,&d);
//	R1=r1+r2*d;
//	printf("Ӧ����:%.2f\n",R1);//R1
//	printf("ʵ����:");//R2
//	/*float R2=0.0;*/
//	scanf("%f",&R2);
//	R=R2-R1;
//	printf("Ӧ����:%.2f ",R);//R	
//	return 0;
//}