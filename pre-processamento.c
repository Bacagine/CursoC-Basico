/**
 * pre-processamento.c
 *
 * Escrito por Gustavo Bacagine
 * 
 * O pre-processamento da linguagem C possui
 * diretivas de compilacao, algumas sao:
 *
 * Inclusao, definicao e undef
 * ----------------------------
 * #include -> Inclui um arquivo no programa (normalmente um .h)
 * #define  -> Cria uma macro ou constante
 * #undef   -> Exclui a macro ou constante criada com o define
 *
 * Condicionais
 * -------------
 * #if     -> Verifica se uma expressao e verdadeira
 * #ifdef  -> Verifica se uma macro ou constante esta definida
 * #ifndef -> Verifica se uma macro ou constante nao esta definida 
 * #else   -> Usado quando os if's nao sao atendidos
 * #elif   -> Juncao de else e if
 * #endif  -> Fim de um bloco de if e else
 * 
 * Data: 13/11/2023
 */

/**
 * Incluindo o arquivo stdio.h
 * para poder usar a funcao printf
 */
#include <stdio.h>

/**
 * Constantes e macros
 */

/**
 * Usado para suprimir os warnings na 
 * compilacao concernentes a variaveis que 
 * nao foram usadas no programa.
 */
#define UNUSED(X) (void) X

#define DEVELOPER "Gustavo Bacagine"
#define vHiDev() printf("Hi developer %s\n", DEVELOPER)

int main(int argc, char **argv) {
  printf("File: %s\n", __FILE__);
  printf("Line: %d\n", __LINE__);
  printf("Build in %s %s\n", __DATE__, __TIME__);
  printf("This function is called %s\n", __func__);

  // Usando a macro unused
#ifdef UNUSED
  printf("UNUSED esta definido\n");
  UNUSED(argc);
  UNUSED(argv);
#endif
  
// Desfazendo o define de UNUSED
#undef UNUSED

#ifndef UNUSED
  printf("UNUSED nao esta mais definido\n");
#endif

  // Verificando qual o sistema operacional
#ifdef __linux__
  printf("Hello Linux!\n");
#elif defined(_WIN32)
  printf("Hello Windows\n");
#else
  printf("Hi other system\n");
#endif
  
#ifdef DEVELOPER
  vHiDev();
#endif

  return 0;
}

