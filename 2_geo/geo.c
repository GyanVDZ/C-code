#include <stdio.h>
#include <math.h>

int main(void){
    double a, r, sum;
    int N;

    printf("Type a, r, sum ");
    scanf("%lf %d %lf", &a, &N, &r);

    for(int i =0; N>=i; i++){
        sum = sum + a*pow(r,i);
    }
    printf("\n%.2f", sum);
return 0;

}
