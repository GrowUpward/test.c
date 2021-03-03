#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

char fun(int s)
{        
	char grade;     // 存储分数对应的等级
	/********** Begin **********/
	
    /*int i;
	char grade ={'A','B','C','D','E'};
	if (s>=90 && s<=100)
	 char	fun = grade[0];
	else
		char fun =grade [4];
    */

	 if ( s <= 59 )      grade = 'E' ;  
	 else if ( s <=69 && s>59 )      grade = 'D' ;  
	 else if( s<=79 && s>69)      grade = 'C' ; 
	 else if ( s<=89 && s>79 )      grade = 'B' ;
	 else       grade = 'A' ; 
	 return grade ;
	/**********  End  **********/
}

int main (void)
{
        int  score;
        scanf ("%d", &score);
        printf("The grade is: %c\n", fun(score));
        return 0;
}
