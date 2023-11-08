#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int recebeN(int);
int inverteN(int);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n = recebeN(n);

    inverteN(n);

    printf("\n\n");
    system("pause");
    return 0;
}

int recebeN(int n){
    do{
        printf("Insira um número de 3 digitos: ");
        scanf(" %d", &n);
    }while(999 < n || n < 100);

    return n;
}

int inverteN(int n){
   int c = 0, d = 0, u = 0;

    n = inverteC(n, c, d, u);

    printf("\nNúmero invertido: %d", n);
}

int inverteC(int n, int c, int d, int u){
    if(n < 100 && n >= 10){
        d++;
        return(inverteC(n-10, c, d, u));
    }

    if(n < 10 && n > 0){
        u++;
        return(inverteC(n-1, c, d, u));
    }

    if(n == 0){
        d = d * 10;
        u = u * 100;
        n = c + d + u;
        return n;
    }

    c++;
    return(inverteC(n-100, c, d, u));

}

