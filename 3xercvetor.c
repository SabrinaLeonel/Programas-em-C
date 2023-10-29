#include <stdio.h>

int main()
{
    int vet[5];
    int i, j, maior;

    printf("    Digite 5 numeros:\n");
    for(i=0; i<5; i++){                  //Pede até 5x uma entrada de numeros
        scanf("%d",&j);                 //guarda o numero informado na variavel j
        vet[i] = j;                    //guarda o numero informado na posiçao "i" do vetor
    }

    printf("\n  Elementos do vetor: ");
    for(i = 0; i<5; i++){                //varre todo o vetor
        printf("%d, ", vet[i]);         //exibe todos os elementos do vetor
    }

     maior = vet[0];                    // valor da variavel "maior" começa com o valor do elemento do vetor na posição 0

    for(i = 0; i < 5; i++){             //varre todo o vetor
        if(vet[i] > maior){             //Verifica se o elemento na posição "i" é maior que a variavel "maior"
            maior = vet[i];             // Caso seja maior, atualiza o valor da variavel para o valor do vetor na posição atual
        }
    }
    printf("\n  Maior elemento do vetor: %d\n", maior);    //exibe o maior elemento do vetor

    return (0);
}
