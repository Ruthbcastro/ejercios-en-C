#include <stdio.h>
#include <stdlib.h>

// Escribe una función que salude a "fulanito", donde fulanito es el parametro.
void saludo(char const *fulanito);
int main(void) {
  char fulanito[10] = "Farid";

  saludo(fulanito);
  return 0;
}

void saludo(char const *fulanito) { printf("Hello World %s\n", fulanito); }