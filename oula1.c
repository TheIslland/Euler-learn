/*************************************************************************
	> File Name: oula1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月23日 星期一 14时42分23秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int sum, sum1,sum2;
    sum1 = (3 + 999) *(333) / 2;
    sum2 = (5 + 995) *(999 / 5) / 2;
    sum = (15 + 1000 / 15 * 15) *(1000 /15) / 2;
    printf("%d\n",sum1 + sum2 - sum  );
    return 0;
}