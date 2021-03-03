#include <stdio.h>
char fun(int s)
{
 char grade;
 
 if(s>=90 && s<=100)
	 //'90,91,92,93,94,95,96,97,98,99,100')
	 char fun = 'A';
 else 
	 char fun = 'B';



}

int main (void)
{
        int  score;
        scanf ("%d", &score);
        printf("The grade is: %c\n", fun(score));
        return 0;
}