#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int retornaVET(int[], int, int, int);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vet[] = {3, 6, 10, 9, 43, 5, 7, 9, -2, 13};
    int i = vet[0];
    int j = 0;
    int n = (sizeof(vet)/sizeof(int));

    i = retornaVET(vet, i, j, n);


    printf("\n%d", i);
    printf("\n\n");
    system("pause");
    return 0;
}

int retornaVET(int vet[], int i, int j, int n){
    if(i > vet[j]){
        i = vet[j];
    }

    if(j == n){
        return i;
    }

    return retornaVET(vet, i, j+1, n);
}
