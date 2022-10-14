#include <stdio.h>

int main(void){
    double d;
    printf("Insert var: ");
    scanf("%lf", &d );
    printf("\nC     K       F");
    printf("\n%.2f %.2f %.2f", d, d-273.15, d*1.8 + 32);
    return 0;
}