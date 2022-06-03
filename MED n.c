#include <stdio.h>
int main(){

    int i, cont;
    float num, acum, med;

    for (i > 1;i < 6;i++){
        printf ("Digite um numero:\n");
        scanf ("%f", &num);
        if ( num > 0 && num <= 0 ){
            cont += 1;
            acum += num;
            med = acum / cont;
        }
    }printf ("\n%d numero sao positivos: \n", cont);
    printf ("\n%.1f e a media dos numeros positivos \n", med);

    return 0;
}
