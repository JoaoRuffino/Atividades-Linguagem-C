#include <stdio.h>
#include <stdlib.h>

int main(){

int v1[5], v2[5];
int i = 0, j = 0, v = 0;

for(i = 0; i < 5; i++){
printf("\nInforme o valor do elemento %d do vetor 1: ", i + 1);
scanf("%d", &v1[i]);
}

for(j = 0; j < 5; j++){
printf("\nInforme o valor do elemento %d do vetor 2: ", j + 1);
scanf("%d", &v2[j]);
}

printf("\nvetor 1 =");
for(i = 0; i < 5; i++){
    printf(" %d", v1[i]);
}
printf("\nvetor 2 =");
for(j = 0; j < 5; j++){
    printf(" %d", v2[j]);
}

for (i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
        if (v1[i] == v2[j]){
            printf("\n\nValores iguais na posicao: %d do vetor 1 e %d do vetor 2\n", i + 1, j + 1);
            v = 1;
        }
    }
}


if (v == 0){
    printf("\n\nNao possuem valores iguais");
}

printf("\n\n\n\n");

system("pause");
return 0;
}
