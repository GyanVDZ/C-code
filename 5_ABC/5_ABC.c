#include <stdio.h>
#include <math.h>
#include <complex.h>

/*
Student: Boyan Lowies
Studynumber: 5845750
Assignment number: 4
*/

extern int a, b, c;
double x1real, x2real; 							/*interalise global an external vars*/
double complex ximag;

int discriminant(void){							/*calculate d and return static disc*/
    static double disc = 0;
    disc = (b*b) - 4*a*c;	
    return disc;
}

void abc(void){
	double disc = discriminant();				/*get disc*/
	
	
	if (disc == 0)
	{
		x1real = 0;								/*check if disc = 0 and do apropriate calculations*/
		x2real = 0;
		ximag = 0;
	}
	else if(disc > 0){
		x1real = (-b + sqrt(disc))/(2*a);		/*check if disc > 0 and do apropriate calculations*/
		x2real = (-b - sqrt(disc))/(2*a);
		ximag = 0;
	}
	else if (disc < 0)
	{
		x1real = (-b * 1.0000)/(2*a);			/*check if disc < 0 and do apropriate calculations*/
		x2real = (-b * 1.0000)/(2*a);
		ximag = (sqrt(-disc)/(2*a));
	}
}