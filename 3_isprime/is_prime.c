#include <stdio.h>

int main(void){
    int number;
    printf("Is this a prime number: ");
    scanf("%d", &number);
    
    
    if(number < 2){
        printf("%d is not a prime number",number);
        return 0;
    }

    for( int i =2 ; (i*i) <= number; i++){
        if((number % i) == 0){
            printf("\n%d is not a prime number",number);
            return 0;
        }
        printf("\n%d",i);
    } 
    printf("\n%d is a prime number", number);
    return 0;
}