/*
 * switchoperator.c
 *
 *  Created on: 03.10.2012
 *      Author: artem
 */
#include <stdio.h>
int mainka(void){
	float value1,value2;
	char operator;
	printf("Введите 2 значение и оператор");
	scanf("%f %c %f",&value1,&operator,&value2);
	switch(operator){
	case '+':
		printf("%.2f\n",value1+value2);
		break;
	case '-':
		printf("%.2f\n",value1-value2);
		break;
	case '*':
		printf("%.2f\n",value1 * value2);
		break;
	case '/':
		if (value2 ==0)
			printf("Division by zero.\n");
		else
		printf("%2f\n",value1/value2);
		break;
	default:
		printf("Неизвестное значение\n");
		break;
	}
	return 0;
}

