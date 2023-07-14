//diziler _array.c
#include <stdio.h>

char* gunler[]={"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};

//              0.index  1.index  2.index    3.index   4.index  5.index  6.index
int main(){

	int i;
	for(i=0 ; i<7 ; i++){
	printf("%d.gun: %s\n",i+1, gunler[i]);	
	}	
}
