#include <stdio.h>
#include <unistd.h>

int main()
{
    int resp, j, i;
    float calcMi, milha, metro, calcMe;
    char resp2;

    printf(" ______________________________________________________________ \n");
    printf("|                                                              |\n");
    printf("|                    Bem vindo ao Programa                     |\n");
    printf("|                  Conversor de Metros/Milhas                  |\n");
    printf("|______________________________________________________________|\n");
    printf("\n  Deseja calcular a quantidade de metros(1) ou milhas(2)?  ");
    scanf("%d", &resp);

    //se a escolha for "1", calcula a quantidade de metros equivalente a quantidade de milhas informada
    if(resp == 1) {
        printf("  Digite o numero de milhas: ");
        scanf("%f", &milha);
        calcMe = milha * 1610;

        //animação de loading
        printf("\r \n                                  Calculando...\n");
        for (i = 0; i <= 100; i += 10) {
            printf("\r[");
            for (j = 0; j < i; j += 10) {
                printf("=======");
            }
            printf(">%d%%]", i);
            fflush(stdout);
            usleep(400000); // espera por 0,4 segundos
        }
        system("cls");
        printf("\n  %.1f milha(s) equivale a %f metros\n", milha, calcMe);
    }
    //se a escolha for "2", calcula a quantidade de milhas equivalente a quantidade de metros informada
    else if(resp == 2) {
        printf("  Digite o numero de metros: ");
        scanf("%f", &metro);
        calcMi = metro * 0.000621371192;

        //animação de loading
        printf("\r \n                                  Calculando...\n");
        for (i = 0; i <= 100; i += 10) {
            printf("\r[");
            for (j = 0; j < i; j += 10) {
                printf("=======");
            }
            printf(">%d%%]", i);
            fflush(stdout);
            usleep(400000); // espera por 0,4 segundos
        }
        system("cls");
        printf("\n  %.1f metro(s) equivale a %f milha(s)\n", metro, calcMi);
    }

    printf("\n  Deseja calcular novamente?S/N  ");

    // se a opção for fazer um novo calculo, recomeça o programa
    scanf(" %c", &resp2);
    if(resp2 == 'S' || resp2 == 's') {
        system("cls");
        main();
    }
    if(resp2 == 'N' || resp2 == 'n') {
        printf("\n........................FIM DO PROGRAMA.........................\n");
    }
    return 0;
}
