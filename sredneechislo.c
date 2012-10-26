#include <stdio.h>
int srednyak(void){
int i,g=0,mass[11];
for(i=0;i<11;++i)
mass[i]=i*i;
for(i=0;i<11;++i)
	g=g+mass[i];
printf("%i",g/11);
return 0;
}



