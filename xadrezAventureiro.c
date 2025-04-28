#include <stdio.h>

int main(){

    int t = 1;
    int b = 1;
    int r = 1;
    int baixo = 1;

    printf("Este programa movimentará as peças de xadrez.\n");
    printf("Torre: 5 casas à direita.\n");
    printf("Bispo: 5 casas na diagonal, para cima e à Direita.\n");
    printf("Rainha: 8 casas à esquerda.\n");

    printf("\nAqui estamos movimentando a torre:\n");

    while(t <= 5){

        printf("Direita.\n");

        t++;
    }      
    
    printf("\nAqui estamos movimentando o Bispo:\n");

    do{

        printf("Direita, Cima.\n ");

        b++;

    }while(b<=5);

    printf("\nAgora vamos movimentar a Rainha:\n");

    for (r ; r <= 8; r++){

        printf("Esquerda.\n");
    }

    printf("\nAgora vamos ao nível aventureiro.\n");
    printf("O cavalo deverá movimentar-se 2 casas para baixo, e 1 casa à esquerda.\n");
    printf("Para isso, deveremos utilizar loops aninhados, sendo necessáriamente utilizado o for em um deles.\n\n");

    for (int c = 1; c <=1; c++){

        while (baixo <= 2)
        {
            printf("Baixo.\n");
            baixo++;
        } 

        printf("Esquerda.\n");
    }

    return 0;

}