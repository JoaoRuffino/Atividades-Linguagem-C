#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void recebeM(int matriz[6][6]);
void exibeM(int matriz[6][6]);
int somaD1(int matriz[6][6], int);
int somaD2(int matriz[6][6], int);

int main(){
    setlocale(LC_ALL, "Portuguese");
    int matriz[6][6];

    recebeM(matriz);
    exibeM(matriz);
    int d1 = 0, d2 = 0;
    d1 = somaD1(matriz, d1);
    d2 = somaD2(matriz, d2);

    printf("\n D1 = %d", d1);
    printf("\n D2 = %d", d2);
    printf("\n\n");
    system("pause");
    return 0;
}

void recebeM(int matriz[6][6]){
    printf("Preencha a matriz:\n\n");

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            printf("Posição[%d][%d]= ", i, j);
            scanf(" %d", &matriz[i][j]);
        }
    }
}

void exibeM(int matriz[6][6]){
    printf("\nOK, MATRIZ PREENCHIDA:\n\n");
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            printf("| %d ", matriz[i][j]);
        }
        printf("|\n");
    }
}

int somaD1(int matriz[6][6], int d1){
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(j == i){
                d1 += matriz[i][j];
            }
        }
    }

    return d1;
}

int somaD2(int matriz[6][6], int d2){
    for(int i = 0; i < 6; i++){
        for(int j = 5; j >= 0; j--){
            if(i+j == 5){
                d2 += matriz[i][j];
            }

        }
    }
    return d2;
}


