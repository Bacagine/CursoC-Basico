/**
 * stdmacros.c
 *
 * Escrito por: Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 *
 * Descricao: Mostrando as macros e constantes padroes da linguagem C
 *
 * Data: 13/11/2023
 */

#include <stdio.h>

int main(int argc, char **argv) {
  printf(
    "Linha.............: %d\n"
    "Arquivo...........: %s\n"
    "Data da compilacao: %s\n"
    "Hora da compilacao: %s\n"
    "STDC..............: %d\n",
    __LINE__,
    __FILE__,
    __DATE__,
    __TIME__,
    __STDC__ // Valor 1, padrao ANSI; outro valor indica outro padrao
  );

  return 0;
}

