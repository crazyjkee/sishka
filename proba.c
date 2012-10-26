#include <stdio.h>
int probka(void){
	int numbers[10]={1,0,0,0,0,0,0,0,0,0};
	int i,j;
	for(j=0;j<10;++j){
		//printf("Значение j во внешнем цикле - %i\n",j);
		for(i=0;i<j;++i)
			//printf("Значение i во внутреннем цикле - %i\n",i);
			numbers[j]+=numbers[i];
	     // printf("Значение конечного цикла - %i\n",numbers[j]);
		}
	for(j=0;j<10;++j)
		printf("Конечный результат --- %i\n ",numbers[j]);
	printf("\n");
	return 0;
}


