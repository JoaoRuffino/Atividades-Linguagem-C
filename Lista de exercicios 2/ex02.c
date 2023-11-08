#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int recebeNum();
void exibeNum(int);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n = recebeNum();

    exibeNum(n);

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

void exibeNum(int n){
    int i, j, count = 1, x;
    for(i = 0; i < (n*2)-1; i++){
        if(count < n){
            for(j = 0; j < count; j++){
                printf("*");
            }
            count++;
            x = count;
        } else {
            for(j = 0; j < x; j++){
                printf("*");
            }
            x--;
        }
        printf("\n");
    }
}
