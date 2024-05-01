/**
 * loop.c
 *
 * Written by Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 * 
 * E passado uma condicao inicial, enquanto a condicao de existencia for
 * verdadeira, realiza o codigo.
 * A acao de iteracao e usada para que em algum momento a condicao de existencia
 * deixe de ser verdadeira.
 *
 * for ( condicao inicial; condicao de existencia; acao a cada iteracao ) {
 *   codigo
 * }
 * 
 * Verifica a condicao antes de entrar no loop.
 * Realiza o codigo enquanto a condicao for atendida.
 *
 * while ( condicao ) {
 *   codigo
 * }
 *
 * do while realiza o codigo pelo menos uma vez, e apos a execucao ele checa.
 * do {
 *   codigo
 * } while ( condicao );
 *
 * Date: 2023-12-27
 */

#include <stdio.h>

int main(int argc, char **argv) {
  int ii = 0;
  int iOp = 0;

  // Mostra a mensagem 10 vezes na tela
  for ( ii = 0; ii < 10; ii++ ) {
    puts("Hello World!!!");
  }

  // Mostra a mesagem 10 vezes
  ii = 0;
  while ( ii < 10 ) {
    printf("Hello World!!!\n");
    ii++;
  }

  // Criacao de um menu
  do {
    printf(
        "******MENU****\n"
        "* 1) Opcao 1 *\n"
        "* 2) Opcao 2 *\n"
        "* 3) Opcao 3 *\n"
        "* 4) Sair    *\n"
        "**************\n"
    );
    scanf("%d", &iOp);
    
    // Verificando o valor da opção passada pelo usuario usando switch case
    switch ( iOp ) {
      case 1: {
        printf("Você escolheu a opção 1\n");
        break;
      }
      case 2: {
        printf("Você escolheu a opção 2\n");
        break;
      }
      case 3: {
        printf("Você escolheu a opção 3\n");
        break;
      }
      case 4: {
        printf("Você escolheu a opção 4\n");
        printf("Saindo ...\n");
        break;
      }
      default: {
        printf("E: Opção invalida!\n");
        printf("Escolha apenas valores entre 1 e 3\n");
        break;
      }
    }
  } while ( iOp != 4 );

  return 0;
}

