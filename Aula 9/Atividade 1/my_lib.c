#include <stdio.h>
#include <stdlib.h>
#include "my_lib.h"



    void Funvantagens(float x, float y, float z, float w, float *a, float *b, float *c){
        *a = x * y;
        *b = z * w;
        *c = *a + *b;
    }

    void Fundeducoes(float h, float *i, float *j, float *k, float a){
        *i = a * 0.08;
        *j = a * h;
        *k = *i + *j;
    }
