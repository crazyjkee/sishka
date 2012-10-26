/*
 * sqrt.c
 *
 *  Created on: 20.10.2012
 *      Author: artem
 */
#include <stdio.h>
float absoluteValue (float x){
	if(x<0){
		x=-x;}
	return (x);
}

//Функция для расчета квадратного корня числа.
float squareRoot(float x,float epsilon)
{

	double guess =1.0;
	while(absoluteValue(guess*guess-x)>=epsilon){

		guess = (x/guess+guess)/2.0;
    printf("guess = %0.10f\n",guess);
	}
	return guess;
}
int sqrtka(void){
	printf("squareRoot (2.0) = %f\n",squareRoot(2.0,0.00001));
	printf("squareRoot (144.0) = %f\n",squareRoot(144.0,0.00001));
	printf("squareRoot (17.5) = %f\n",squareRoot(17.5,0.00001));
	return 0;
}

