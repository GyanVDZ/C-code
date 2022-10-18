#include <stdio.h>

/*
Student: Boyan Lowies
Studynumber: 5845750
Assignment number: 3
*/




int main(void){
    int number, i;
	int result = 1;												/*initialise vars*/
    scanf("%d", &number);										/*get number*/
    
    if(number < 2){												
        result = 0;												/*If number is lower then 2 set result to false*/
    }
  
    for(i =2 ; (i*i) <= number; i++){								
        if((number % i) == 0){									/*Check if the rest of division number/i is 0*/
			result = 0;											/*if zero then set result to 0*/
			break;
        }	
    } 

	if(result == 1){											/*check if result is 1 or 0*/
		printf("%d is a prime number\n",number);
	}
	else{
		printf("%d is not a prime number\n",number);
	}
	return 0;
}