/*
Student: Boyan Lowies
Studynumber: 5845750
Assignment number: 1
*/

#include <stdio.h>											

int main(void){
	double d;														/*define d as double*/
	scanf("%lf", &d );												/*scan for value d */
	printf("C\tK\tF\n");											/*print first line */
	printf("%.2f\t%.2f\t%.2f\n", d, d+273.15, d*1.8 + 32);			/*print calculated values for C K and F from d*/
	return 0;														/* end programme*/
}