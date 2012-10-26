/*
 * converter.c
 *
 *  Created on: 05.10.2012
 *      Author: artem
 */
/*Программа преобразования целого числа из одной системы
 * счисления в другую*/
#include <stdio.h>
int main(void){
	const char baseDigits[16]={'0','1','2','3','4','5',
			'6','7','8','9','A','B','C','D','F'};
	int convertedNumber[64];
	long int numberToConvert;
	int nextDigit,base,index=0;
	//Получить число и основание.
	printf("Число которое нужно перевести?");
	scanf("%ld",&numberToConvert);
	printf("Система счисления?");
	scanf("%i",&base);
	//Преобразовать в указанное основание.
	do{
		convertedNumber[index] = numberToConvert%base;
		++index;
		numberToConvert = numberToConvert/base;
	}
	while(numberToConvert!=0);
	//Отобразить результат в обратном порядке.
	printf("Результат = ");
	for(--index;index>=0;--index){
		nextDigit = convertedNumber[index];
		printf("%c",baseDigits[nextDigit]);
	}
	printf("\n");
	return 0;
	}


