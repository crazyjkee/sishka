/*
 * treyg.c
 *
 *  Created on: 02.10.2012
 *      Author: artem
 */
#include <stdio.h>
int conculateTriangularNumber(int n){
	int i,triangularNumber=0;
	for(i=1;i<=n;++i)
		triangularNumber +=i;
	return triangularNumber;
}
int treyg(void){
	int conculateTriangularNumber(int n);
	printf("triangularNumber %i\n",conculateTriangularNumber(10));
	printf("triangularNumber %i\n",conculateTriangularNumber(20));
	printf("triangularNumber %i\n",conculateTriangularNumber(30));
	printf("triangularNumber %i\n",conculateTriangularNumber(50));
	return 0;
}
