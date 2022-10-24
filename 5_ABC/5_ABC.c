#include <stdio.h>

extern int a, b, c;
double x1real, x2real, ximag;

int discriminant(void){
    static double disc = 0;
    disc = (b^2) - 4*a*c;
    return disc;
}

void abc(void){
	double D = discriminant();
	if(D>0){

	}
	else if (D == 0)
	{
		/* code */
	}
	else if (D<0)
	{
		/* code */
	}
	
	


}