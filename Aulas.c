#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

int main(void){
char comando [9] = "color";
char cores [2];
setlocale(LC_ALL, "Portuguese");
SetConsoleTitle ("Cores com system");
float a, b, x;

printf ("Tabela de cores:\n\n");
printf ("\t0 - Preto\t8 - Cinza\n");
printf ("\t1 - Azul\t9 - Azul Claro\n");
printf ("\t2 - Verde\tA - Verde Claro\n");
printf ("\t3 - Verde Água\tB - Verde Água claro\n");
printf ("\t4 - Vermelho\tC - Vermelho Claro\n");
printf ("\t5 - Roxo\tD - Lilás\n");
printf ("\t6 - Amarelo\tE - Amarelo Claro\n");
printf ("\t7 - Branco\tF - Branco Brilhante\n");

printf ("\n\nCor de fundo:\t");
scanf ("%c", &cores [0]);
getchar();

printf ("\n\nCor do Texto:\t");
scanf ("%c", &cores [1]);

strcat (comando, cores);
system (comando);

    printf ("Digite o valor 1:\t");
    scanf ("%f", &a);
    if (a < 0){
    printf ("\nNumero invalido\n");
       printf ("Digite o valor 1: \t");
       scanf ("%f", &a);
   }
    printf ("Digite o valor 2:\t");
    scanf ("%f", &b);
    if (b < 0){
    printf ("\nNumero invalido\n");
       printf ("Digite o valor 2: \t");
       scanf ("%f", &b);
   }
    printf ("\nOs valores digitados: a = %.1f e b = %.1f\n", a, b);

   x = a + b;

printf ("\nO valor do resultado:%.1f\n", x);
return 0;
}
