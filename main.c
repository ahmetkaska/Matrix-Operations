//
//  main.c
//  C_Matrix_Proje
//
//  Created by Ahmet Kaşka on 15.12.2021.
//

#include <stdio.h>
#include "matrisoperations.h"


int main(){
    int matris1 [5][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    int matris2 [3][3]={
        {10,11,12},
        {13,14,15},
        {16,17,18},
    };
    printf("size = %d\n",sizeof(matris1)/sizeof(matris1[0]));
    operasyon1( matris1, matris2,0);
    
    return 0;
}
