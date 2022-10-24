#include <stdio.h>
#include <math.h>
#include <complex.h>

extern int a, b, c;
double x1real, x2real; 
double complex ximag;

int discriminant(void){
    static double disc = 0;
    disc = (b*b) - 4*a*c;
    return disc;
}

void abc(void){
	double disc = discriminant();
	if (disc == 0)
	{
		x1real = 0;
		x2real = 0;
	}
	else if(disc > 0){
		x1real = (-b + sqrt(disc))/(2*a);
		x2real = (-b - sqrt(disc))/(2*a);
	}
	else if (disc < 0)
	{
		printf("%d %.d %.d", a, b, c);
		x1real = (-b)/(2*a);
		x2real = (-b)/(2*a);
		ximag = (csqrt(disc))/(2*a);
		
	}
	
	


}