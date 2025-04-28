#include <stdio.h>

void movimentaDireita(int j){ //função recursiva para movimentar à direita.
     
    if (j > 0){
        printf("Direita.\n");
        movimentaDireita(j-1);
    }        

}

void movimentaEsquerda(int k){ //função recursiva para movimentar à esquerda.
     
    if (k > 0){
        printf("Esquerda.\n");
        movimentaEsquerda(k-1);
    }        

}

void movimentaCima(int l){ //função recursiva para movimentar para cima.
     
    if (l > 0){
        printf("Cima.\n");
        movimentaCima(l-1);
    }        

}

// função principal.
int main(){

    int torreDireita = 5;
    int rainhaEsquerda = 8;
    int cavaloCima = 1;
    int cavaloDireita = 1;
    int bispoDireita = 1;
    int bispoCima = 1;
    
    printf("**Movimentação das peças**\n");
    printf("Bispo: 5 casas na diagonal direita para cima.\n");
    printf("Torre: 5 casas para a direita.\n");
    printf("Rainha: 8 casas para a esquerda.\n");
    printf("Cavalo: 2 casas para cima, e 1 para a direita.\n");
    printf("\nMovimentação do Bispo:\n");

    //movimentação do bispo.
    for(int i = 0; i < 5; i++){  //utilização de loop aninhado para movimentar o bispo.
        for(int j = i; j <= i; j++){

            movimentaDireita(bispoDireita); //recursividade para andar a direita.

        }

        movimentaCima(bispoCima); // recursividade para andar para cima.

    }

    //movimentação da torre.
    printf("\nMovimentação da Torre.\n"); //utilização de função recursiva para mover a torre.
    movimentaDireita(torreDireita);

    //movimentação da rainha;
    printf("\nMovimentação da Rainha.\n"); //utilização da função recursiva para mover a Rainha.
    movimentaEsquerda(rainhaEsquerda);

    //movimentação do cavalo.
    printf("\nMovimentação do Cavalo:\n");

    for(int i = 0, j = 0; i < 2 ; i++, j++ ){ //utilização de loop com multiplas variáveis.

        if (i < 2){ //condição para imprimir Cima 2x.
        movimentaCima(cavaloCima);
        }

        if (j == 1){ //condição para chamar a função recursiva e movimentar à direita.
        movimentaDireita(cavaloDireita);
        }               

    }    
 
    return 0;


}