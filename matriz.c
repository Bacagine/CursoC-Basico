/**
 * matriz.c
 *
 * Written by Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 *
 * Vetores: Conjunto de dados do mesmo tipo em sequencia na memoria.
 *
 * [1] [2] [3] [4] ... [n]
 *
 * Matrizes: Conjunto de dois vetores, um para a linha e o outro para coluna.
 * E usado por exemplo para: Criar jogos de tabuleiros, mapas, usado para 
 * plano cartesiano, etc
 *
 * Date: 2024-05-01
 */

#include <stdio.h>

#define MAX_CEDULAS 8

// Line and column of the matrix
#define LINE   3
#define COLUMN 3

int main(int argc, char **argv) {
  int aiCedulas[MAX_CEDULAS] = { 1, 2, 5, 10, 20, 50, 100, 200 };
  int iMatrix[LINE][COLUMN] = {
    0, 1, 2,
    3, 4, 5,
    6, 7, 8
  };
  int ii = 0;
  int jj = 0;

  // Mostrar vetor
  printf("Cedulas do Real: ");
  for ( ii = 0; ii < MAX_CEDULAS-1; ii++ ) {
    printf("%d, ", aiCedulas[ii]);
  }
  printf("%d\n", aiCedulas[ii]);

  // Mostrando a matriz
  printf("Valores da minha matriz:\n");
  for ( ii = 0; ii < LINE; ii++ ) {
    for ( jj = 0; jj < COLUMN; jj++ ) {
      printf("%d  ", iMatrix[ii][jj]);
    }
    putchar('\n');
  }

  return 0;
}

