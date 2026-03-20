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
    
     picanha = (homem * 900) + (mulher * 750) + (kid * 500);
      picanha = picanha/1000;

     printf("\nquantidade de picanha: %.2f,kg", picanha);
     
      queijo = (homem * 500) + (mulher * 300) + (kid * 400);
      queijo = queijo/1000;

     printf("quantidade de frango: %.2f,kg", frango);



    return 0;
}
