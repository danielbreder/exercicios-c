#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculadora (float, float, char);

int main()
{
  float a, b, r;
  char op;

  setlocale(LC_ALL, "Portuguese");

  printf("*** Implementação de uma calculadora simples ***\n");
  printf("Forneça o primeiro operando: ");
  scanf("%f", &a);
  printf("Forneça o segundo operando: ");
  scanf("%f", &b);
  printf("Forneça o operador: ");
  scanf("\n"); //Consumir o ENTER anteriormente lido.
  op = getchar();

  switch(op)
  {
    case '+':
    case '-':
    case '*':
    case 'x':
    case 'X':
    case '/':
    case ':': r = calculadora(a, b, op);
              printf("%f %c %f = %f", a, op, b, r);
              break;
    default : printf("Operador inválido.");
  }

  printf("\n");
  system("PAUSE");

  return 0;
}

float calculadora(float n1, float n2, char op)
{
  float resultado = 0;
  switch(op)
  {
    case '+': resultado = n1 + n2; break;
    case '-': resultado = n1 - n2; break;
    case '*':
    case 'x':
    case 'X': resultado = n1 * n2; break;
    case '/':
    case ':': resultado = n1 / n2; break;
  }
  return resultado;
}
