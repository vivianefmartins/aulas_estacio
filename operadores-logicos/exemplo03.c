#include <stdio.h>

int main() {
  int a = 5;
  int b = -10;
  int c = 0;

  /*
  a > 0 => Verdadeiro
  b < 0 => Verdadeiro
  Verdadeiro && Verdadeiro => Verdadeiro

  c == 0 => Falso
  Verdadeiro || Falso => Verdadeiro
  */

  if (a > 0 && b < 0 || c == 0) {
    printf("A condicao e verdadeira\n");
  } else {
    printf("A condicao e falsa\n");
  }

  return 0;
}