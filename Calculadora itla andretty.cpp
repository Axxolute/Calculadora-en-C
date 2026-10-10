#include <stdio.h>
#include <string.h>

int main() {
	int numero_1;
	int numero_2;
	char operacion[20];
	/* Definicion y establecimiento de variables */
	
printf("Calculadora Itla, Bienvenido.\nCual es tu primer numero? ");  
scanf("%d", &numero_1);

printf("Cual es tu segundo numero? ");
scanf("%d", &numero_2);

printf("Que operacion deseas realizar? (sumar, restar, multiplicar, dividir) ");
scanf("%s", operacion);

if (strcmp(operacion, "sumar") == 0) {
	/* Strcmp se utiliza para comparar frases o caracteres */
	printf("El resultado de la suma es " "%d\n", numero_1 + numero_2 );
}
	
if (strcmp(operacion, "restar") == 0){
	printf("El resultado de la resta es " "%d\n", numero_1 - numero_2);
}
if (strcmp(operacion, "multiplicar") == 0){
	printf("El resultado de la multiplicacion es " "%d\n", numero_1 * numero_2);
}

if (strcmp(operacion, "dividir") == 0){
	printf("El resultado de la division es " "%d\n", numero_1 / numero_2);
}
 getchar();
/* Linea de codigo para que el programa no cierre */

  return 0;

}
