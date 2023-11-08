#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int recebeNum();

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n = recebeNum();


    int i, j, count = 1;
    for(i = 0; i < n; i++){
        for(j = 0; j < count; j++){
            printf("!");
        }
        printf("\n");
        count++;
    }


    printf("\n\n\n");
    system("pause");
    return 0;
}

int recebeNum(){
    int n;
    printf("Insira um número inteiro maior que 0: ");
    scanf(" %d", &n);

    while(n <= 0){
        printf("Insira um número inteiro maior que 0: ");
        scanf(" %d", &n);
    }
    return n;
}
