#include <stdio.h>
#include <math.h>

/*
Student: Boyan Lowies
Studynumber: 5845750
Assignment number: 1
*/


int main(void){
    double a, r;                                    /* define a,r,sum as double */
    double sima =0;                                 /* define sima = 0 as double*/
    int N,i;                                        /* define N as int */

    scanf("%lf %d %lf", &a, &N, &r);                /*Scan for values a N and r*/

    for(i =0; N>=i; i++){                           /*init for loop*/
        sima = sima + a*pow(r,i);                   /*calculate sima = sima a*pow(r,i)*/
    }
    printf("%.2f\n", sima);                         /*print sum*/
return 0;                                           /*end programme*/

}
