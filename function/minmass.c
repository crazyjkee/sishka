/*
 * minmass.c
 *
 *  Created on: 20.10.2012
 *      Author: artem
 */
int minimum(int values[10])
{
	int minValue,i;
	minValue=values[0];
	for(i=1;i<10;++i)
		if(values[i]<minValue)
			minValue=values[i];

	return minValue;
}

int minka(void){
	int scores[10],i,minScore;
	int minimum(int values[10]);
	//printf("Enter 10 scores\n");
	for(i=0;i<10;++i)
		//scanf("%i",&scores[i]);
	minScore = minimum(scores);
	//printf("\nMinimum score is %i\n",minScore);
	return 0;
}
