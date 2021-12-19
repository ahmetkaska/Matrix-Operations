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
        {21,19,17,25,28},
        {71,76,73,68,59},
        {153,164,164,157,155},
        {200,201,190,185,180},
        {205,210,215,230,232}
    };
    int matris2 [3][3]={
        {-1,-1,-1},
        {-1,8,-1},
        {-1,-1,-1}
    };
    
    int g=sizeof(matris1)/sizeof(*matris1); // 1. matrisin satir sayisidir.
    int f=sizeof(matris2)/sizeof(*matris2); // 2. matrisin satir sayisidir.
    operasyon1( matris1, matris2,0,g,f);
    //printf("matris[5][5] = %d",matris1[5][5]);
    
    
    return 0;
}
