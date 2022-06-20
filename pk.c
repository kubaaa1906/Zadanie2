#include <stdio.h>
#include "pk.h"

void pk(){
	float a,wynik;
	printf("Wprowadz a:");
	scanf("%f",&a);
	wynik=a*a;
	printf("Pole kwadratu wynosi o boku %f wynosi: %f ",a,wynik);
}
