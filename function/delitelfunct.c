#include <stdio.h>
int gcd(int u,int v){
	int temp;
	while (v!=0){
		temp = u%v;
		//printf("temp== %i\n",temp);
		u=v;
		//printf("u== %i\n",u);
		v=temp;
		//printf("v== %i\n",v);
	}

	return u;
}
int delitka(void)
{
	int result;
	result = gcd(150,35);
	printf("The gcd of 150 and 35 is %i\n",result);
	result = gcd(1026,405);
	printf("The gcd of 1026 and 405 is %i\n",result);
	result = gcd(83,240);
	printf("The gcd of 83 and 240 is %i\n ",result);

	return 0;
}
