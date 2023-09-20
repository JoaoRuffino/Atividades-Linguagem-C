#include <stdio.h>
#include <stdlib.h>

int main(){

    int linhas, colunas, i, j;
    int **matriz1, **matriz2, **matriz3;

    printf("Insira a quantidade de linhas das matrizes: ");
    scanf("%d", &linhas);

    printf("Insira a quantidade de colunas das matrizes: ");
    scanf("%d", &colunas);


    matriz1 = (int **) malloc(linhas * sizeof(int*));
    matriz2 = (int **) malloc(linhas * sizeof(int*));
    matriz3 = (int **) malloc(linhas * sizeof(int*));

    for(i = 0; i < linhas; i++){
        matriz1[i] = (int*) malloc(colunas * sizeof(int));
        matriz2[i] = (int*) malloc(colunas * sizeof(int));
        matriz3[i] = (int*) malloc(colunas * sizeof(int));
    }
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            matriz1[i][j] = i + 1;
            matriz2[i][j] = i + 2;
        }
    }
printf("\n\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n");

    //Impressão Matriz 1
    printf("Matriz 1:\n\n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            if(j == colunas - 1){
            printf("%2d|\n", matriz1[i][j]);
            }
            else{
                printf("%2d|", matriz1[i][j]);
            }
        }
    }
printf("\n\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n");

    //Impressão Matriz 2
    printf("\n\nMatriz 2:\n\n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            if(j == colunas - 1){
            printf("%2d|\n", matriz2[i][j]);
            }
            else{
                printf("%2d|", matriz2[i][j]);
            }
        }
    }

    //soma

printf("\n\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n");
    printf("Matriz de Soma:\n\n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
            if(j == colunas - 1){
            printf("%2d|\n", matriz3[i][j]);
            }
            else{
                printf("%2d|", matriz3[i][j]);
            }
        }
    }

    for (i = 0; i < linhas; i++) {
        free(matriz1[i]);
        free(matriz2[i]);
        free(matriz3[i]);
    }
    free(matriz1);
    free(matriz2);
    free(matriz3);

    printf("\n\n\n");
    system("pause");
    return 0;
}
