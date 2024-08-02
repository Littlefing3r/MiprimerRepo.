//Bloque 2.1.1 : Estructuras Selectivas

#include <stdio.h>

int main () {
	int x,y;
	
	x = 4;
	
	printf ("Acierto el numero x!.\nIntroduce un valor: ") ;
	scanf ("%i" ,&y) ;
	
	if (x == y) {
		printf ("Acertaste !!\n\n");
	}
	else {
		printf ("No has acertado. Intentalo de nuevo!!\n\n");
	}
	system ("pause");
	return 0;
}
