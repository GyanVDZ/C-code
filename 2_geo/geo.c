#include <stdio.h>
#include <math.h>

int main(void){
    double a = 5; double r = 0.7; double sum; int N = 7;
    for(int i =0; N>=i; i++){
        sum = sum + a*pow(r,i);
    }
    printf("\n%.2f", sum);
return 0;

}
