//
//  matrisoperations.c
//  C_Matrix_Proje
//
//  Created by Ahmet Kaşka on 9.12.2021.
//

#include "matrisoperations.h"
#include <stdio.h>
#include <stdlib.h>

int ** operasyon1(int** matris1 , int** matris2,int islemTipi){
    int g =5; //sizeof(matris1)/sizeof(matris1[0]); // 1. matrisin satir sayisidir.
    int f= 3;//sizeof(matris2)/sizeof(*matris2); // 2. matrisin satir sayisidir.
    int d; // dolgu degeridir.
    int boyut=0;
    int sayac=0,i,j;
    
    printf("matris = %d\n", sizeof(matris1));
    printf("g = %d\n",g);
    if (islemTipi==0){
        d = 0;
        boyut= ((g-f+(2*d))/1)+1;
        printf("boyut = %d\n",boyut);
    }
    else if (islemTipi==1) {
        d = (f-1)/2;
        printf("g : %d f : %d d : %d \n",g, f, d);
        boyut= ((g-f+(2*d))/1)+1;
        printf("boyut = %d\n",boyut);
    }
    else{
        printf("Islem tipi 1 veya 0 olmalidir..");
    }
    
    int** matris3 = (int**)malloc(boyut * sizeof(int*)); // matris3 olusturma
        for (i = 0; i < boyut; i++)
            for (j = 0; j < boyut; j++)
                matris3[i][j] = ++sayac;  // matris3 doldurma
    
    for (i = 0; i < boyut; i++)
            for (j = 0; j < boyut; j++)
                printf("%d ", matris3[i][j]); // matris3 ekrana bastirma
    free(matris3);
     
    
    return 0;
}

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

