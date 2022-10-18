#include <stdio.h>

/*
Student: Boyan Lowies
Studynumber: 5845750
Assignment number: 2
*/

int is_prime(int number){
	int result = 1;												/*initialise vars*/										/*get number*/
    int i;

    if(number < 2){												
        result = 0;												/*If number is lower then 2 set result to false*/
    }
  
    for(i =2 ; (i*i) <= number; i++){								
        if((number % i) == 0){									/*Check if the rest of division number/i is 0*/
			result = 0;											/*if zero then set result to 0*/
			break;
        }	
    } 
	return result;
}


int main(void){
	int lower_limit, upper_limit, i,result; 					/*initialise variables*/
	scanf("%d", &lower_limit);									/*get upperlimit*/
	scanf("%d", &upper_limit);									/*get lowerlimit*/
	
	for(i = lower_limit; i <= upper_limit; i++){				/*Check all numbers in range*/
		result = is_prime(i);
		if(result == 1){										/*check if result is 1 or 0*/
			printf("%d\n",i);
		}
	}
}
