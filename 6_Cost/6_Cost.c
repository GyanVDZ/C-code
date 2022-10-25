#include <stdio.h>  
/*
Student: Boyan Lowies
Studynumber: 5845750
Assignment number: 6
*/


int main(void){
    int n, x, m, y;
    double spend, products[100][100], prices[100];                     /*declare variables*/

    scanf("%d", &n);
    
    for(x = 0; x<n; x++){
        scanf("%lf", &prices[x]);                                      /*get contents of n*/           
    }

    scanf("%d", &m);                                                   /* get m*/

    for(x=0; x<m; x++){
        for(y=0; y<n; y++){
            scanf("%lf", &products[x][y]);                             /*get contents of m*/
        }
    }
   
    for(x=0; x<m; x++){
        spend = 0;                                                     /*count and print spend money of each customer*/
        for(y=0; y<n; y++){
            spend += products[x][y] * prices[y];
        }
        printf("%.2f\n", spend);
    }

return 0;
}