	
//Programa cálculos con impares01
#include <stdio.h>
#include <stdlib.h>

#define NMAX 19

int valor[NMAX]; //Declaración de array como variable global, realmente solo usaremos 10 elementos
int numeroItems; //Declaración como variable global
int obtenerValorParaCalculo(); 
void rellenarArray (int numero);
long valorSumatorio (int numeroItemsSum); 
long valorProducto (int numeroItemsProd);
// Ejercicios resueltos de programación aprenderaprogramar.com

int main() {
	int valorParaCalculo=0;    int opcionUsuario = 1;
	while (opcionUsuario!=4) {
		printf("\n\n1: Introducir valor\n2: Calcular serie 1+3+5...\n");
		printf("3: Calcular serie 1*3*5...\n4: Salir\n\nElija opcion: ");
		scanf("%d", &opcionUsuario);
		
		if (opcionUsuario==1) {
			valorParaCalculo =  obtenerValorParaCalculo();
			rellenarArray (valorParaCalculo);
		}
		
		if (opcionUsuario==2) {
			if (valorParaCalculo!=0) {
				printf("n = %d El valor del sumatorio es: %ld", valorParaCalculo, valorSumatorio(numeroItems));
			} else {
				printf("No hay un valor para calculo que permita obtener sumatorio 1+3+5+...");
			}
		}
		
		if (opcionUsuario==3) {
			if (valorParaCalculo!=0) {
				printf("n = %d El valor del producto es: %ld", valorParaCalculo, valorProducto(numeroItems));
			} else {
				printf("No hay un valor para calculo que permita obtener resultado 1*3*5*...");
			}
		}
	}
	return 0;
}


int obtenerValorParaCalculo() {
	int imparElegido = 0;
	do {
		printf("\nPor favor introduzca numero entero impar entre 1 y 19: ");
		scanf("%d", &imparElegido);
	} while (imparElegido<=0 || imparElegido> NMAX ||imparElegido%2==0);
	return imparElegido;
}

void rellenarArray (int numeroElegido) {
	int impar = -1;     int i=0;
	do {
		i = i+1;
		impar = impar +2;
		valor[i] = impar;
	} while (impar < numeroElegido);
	numeroItems = i;
}

long valorSumatorio (int numeroItemsSum) {
	long resultadoSum =0;    int i=0;
	for (i=1; i<=numeroItemsSum; i++) {
		resultadoSum = resultadoSum + valor[i];
	}
	return resultadoSum; //Devolvemos el valor del sumatorio
}

long valorProducto (int numeroItemsProd) {
	int i=0;     long resultadoProd = 1;
	for (i=1; i<=numeroItemsProd; i++) {
		resultadoProd = resultadoProd * valor[i];
	}
	return resultadoProd; //Devolvemos el valor del producto
}
