/**
 * condicoes.c
 *
 * Written by Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 * 
 * if, else -> usado para tomada de decições no programa
 *
 * switch case -> muito usado na criação de menus
 *
 * Date: 2023-12-27
 */

#include <stdio.h>

int main(int argc, char **argv)
{
  int idade = 0;
  int op = 0;

  /**
   * Pegando a idade do usuario
   */
  printf("Digite sua idade: ");
  scanf("%d", &idade);
  setbuf(stdin, NULL);
  
  /**
   * Verificando a faixa etaria do usuario com if else
   */
  if(idade < 0)
  {
    printf("E: idade não pode ser menor que 0!\n");
  }
  else if(idade > 17)
  {
    printf("Você é maior de idade\n");
  }
  else
  {
    printf("Você é menor de idade\n");
  }
  
  /**
   * Pedindo uma opção ao usuario de 1 a 3
   */
  printf("Digite um valor de 1 a 3: ");
  scanf("%d", &op);
  setbuf(stdin, NULL);
  
  /**
   * Verificando o valor da opção passada pelo usuario usando switch case
   */
  switch(op)
  {
    case 1:
      printf("Você escolheu a opção 1\n");
      break;
    case 2:
      printf("Você escolheu a opção 2\n");
      break;
    case 3:
      printf("Você escolheu a opção 3\n");
      break;
    default:
      printf("E: Opção invalida!\n");
      printf("Escolha apenas valores entre 1 e 3\n");
      break;
  }

  return 0;
}

