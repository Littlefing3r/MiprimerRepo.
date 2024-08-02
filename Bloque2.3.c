#include <stdio.h>

int main() {
    int numero;
    

    // Solicitar el número al usuario
    printf("Por favor, ingrese un número entre 1 y 10: ");
    scanf("%d", &numero);


    if (numero < 1 || numero > 10) {
        printf("Número inválido. Por favor, ingrese un número entre 1 y 10: ");
        scanf("%d", &numero);
        
    	printf ("El valor ingresado es correcto .TE FELICITO BRO.\n");
    }
	system ("pause");
	return 0;
 
}
