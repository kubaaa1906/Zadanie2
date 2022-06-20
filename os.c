#include <stdio.h>
#include "os.h"
void os(){
	float a,wynik;
	printf("Podaj wartosc boku:");
	scanf("%f",&a);
	wynik=a*a*a;
	printf("Objetosc szescianu o boku %f wynosi %f.\n",a,wynik);
}
