/*
 * treygfunction.c
 *
 *  Created on: 18.10.2012
 *      Author: artem
 */
#include <stdio.h>
void calculateTriangularNumber(int n){
	int i,triangularNumber=0;
		for(i=1;i<=n;++i)
			triangularNumber =triangularNumber+i;
		printf("Triangular number %i is %i\n",n,triangularNumber);
	}
	int treygowka (void)
	{
		calculateTriangularNumber(10);
		calculateTriangularNumber(20);
		calculateTriangularNumber(50);
		return 0;
	}


