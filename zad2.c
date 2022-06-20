#include <stdio.h>
#include "pk.h"
#include "os.h"

int main(){
	int wybor;
	printf("Wybierz co chcesz obliczyc: \t 1. Pole kwadratu \t 2. Objetosc szescianu \t Twoj wybor:");
	scanf("%d",&wybor);
	if(wybor==1){
		pk();
	}
	else if(wybor==2){
		os();
	}
	else
		printf("Wprowadziles zla wartosc");

}
