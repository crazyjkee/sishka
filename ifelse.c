/*
 * ifelse.c
 *
 *  Created on: 03.10.2012
 *      Author: artem
 */
int ifelseka(void){
	int number,sign;
	printf("Please type in a number: ");
	scanf("%i",&number);
	if(number<0)
		sign=-1;
	else if(number==0)
		sign = 0;
	else
		sign = 1;
	printf("Sign = %i\n",sign);
	return 0;
}

