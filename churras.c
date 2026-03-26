#include <stdio.h>

// for (i = 0 ; i >= 4 ; i++) {
//     printf("Numeros repetidos: %i", i);
// }


int main()
{
    int homem, mulher, kid;
    float frango, picanha,queijo, costela;
    
       
   

    printf("\n ---quantos homems?---  ");
    scanf("%i", &homem);

    printf("\n ---quantas mulheres?--- ");
    scanf("%i", &mulher);
    
    printf("\n ---quantas criancas?--- ");
    scanf("%i", &kid);

          frango = (homem * 800) + (mulher * 600) + (kid * 300);
      frango = frango/1000;

     printf("quantidade de frango: %.2f,kg", frango);
     
      picanha = (homem * 900) + (mulher * 750) + (kid * 500);
      picanha = picanha/1000;

     printf("n\nquantidade de picanha: %.2f,kg", picanha);
     
      queijo = (homem * 500) + (mulher * 300) + (kid * 400);
      queijo = queijo/1000;

     printf("n\nquantidade de queijo: %.2f,kg", queijo);
     
       costela = (homem * 800) + (mulher * 600) + (kid * 400);
       costela = costela/1000;

     printf("n\nquantidade de costela: %.2f,kg", costela);
     
refrigerante = (homem * 1) + (mulher * 0.5) + (kid * 2);
       refrigerante = refrigerante/1;
       printf("n\nquantidade de refrigerante: %.2f,garrafas", refrigerante);
       
       cerveja= (homem * 6) + (mulher * 6) + (kid * 0);
       cerveja = cerveja/1;
         printf("n\nquantidade de cerveja: %.2f,latas", cerveja);
       
       linguica = (homem * 800) + (mulher * 700) + (kid * 550);
       linguica = linguica/1000;
       printf("n\nquantidade de linguica: %.2f,kg", linguica);
       
       paodealho = (homem * 2) + (mulher * 2) + (kid * 3);
       paodealho = paodealho/1;
      printf("n\nquantidade de paodealho: %.2f,pacotes", paodealho);
       
       tilapia= (homem * 400) + (mulher * 300) + (kid * 250);
       tilapia= tilapia/1000;
        printf("n\nquantidade de tilapia: %.2f,kg", tilapia);
       
      cupim = (homem * 800) + (mulher * 600) + (kid * 400);
       cupim = cupim/1000;
       printf("n\nquantidade de cupim: %.2f,kg", cupim);
       



    return 0;
}
