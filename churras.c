#include <stdio.h>

// for (i = 0 ; i >= 4 ; i++) {
//     printf("Numeros repetidos: %i", i);
// }


int main()
{
    int homem, mulher, kid;
    float frango;
    
       frango= 1.5;
   

    printf("\n ---quantos homems?---  ");
    scanf("%i", &homem);

    printf("\n ---quantas mulheres?--- ");
    scanf("%i", &mulher);
    printf("\n ---quantas criancas?--- ");
    scanf("%i", &kid);

      frango = (homem * 800) + (mulher * 600) + (kid * 300);
      frango = frango/1000;

     printf("quantidade de frango: %.2f,kg", frango);



    return 0;
}
