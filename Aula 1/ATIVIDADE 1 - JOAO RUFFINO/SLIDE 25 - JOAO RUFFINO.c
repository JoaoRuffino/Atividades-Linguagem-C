#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;


    for(i = 0; i < 10; i++){
        if(i == 5){
            printf("\n\n\t\t captura de i em: %d \n\n", i);
            continue;
            printf("Observe que esta msg não sera impressa!!");
        }
        printf("Valor de i: %d \n", i);
    }


printf("\n\n");

system("pause");
return 0;
}
