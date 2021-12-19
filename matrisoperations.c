//
//  matrisoperations.c
//  C_Matrix_Proje
//
//  Created by Ahmet Kaşka on 9.12.2021.
//


#include <stdio.h>
#include <stdlib.h>
#include "matrisoperations.h"

int ** operasyon1(int** matris1 , int** matris2,int islemTipi,int satirSayisi1,int satirSayisi2){
   
   // printf("matris[5][5] = %d",matris1[5][5]);
    int d; // dolgu degeridir.
    int boyut=0;
    int sayac=0,i,j;
    int temp =0;
    int temp2 =0;
    int deger =0;
    if (islemTipi==0){
        d = 0;
        boyut= ((satirSayisi1-satirSayisi2+(2*d))/1)+1;
        printf("boyut = %d\n",boyut);
    }
    else if (islemTipi==1) {
        d = (satirSayisi2-1)/2;
        printf("g : %d f : %d d : %d \n",satirSayisi1, satirSayisi2, d);
        boyut= ((satirSayisi1-satirSayisi2+(2*d))/1)+1;
        printf("boyut = %d\n",boyut);
    }
    else{
        printf("Islem tipi 1 veya 0 olmalidir..");
    }
   
    int *ptr = matris1;
    int *ptr2 = matris2;
      
      for (i = 0; i < satirSayisi1; i++) {
        for (j = 0; j < satirSayisi1; j++) {
           temp= temp + (*(ptr+ i * satirSayisi1 + j));
            printf("%d\n",(*(ptr+ i * satirSayisi1 + j)));
        }
          puts(" ");
      }
    
    printf("temp = %d\n",temp);
    for (i = 0; i < satirSayisi2; i++) {
      for (j = 0; j < satirSayisi2; j++) {
         temp2= temp2 + (*(ptr2+ i * satirSayisi2 + j));
         
      }
    }
    printf("temp2 = %d\n",temp2);
    
    /*
    int ** matris3 = (int **) malloc(boyut * sizeof(int*)); // matris3 olusturma
    free(matris3);
     */
  
    int matris3 [boyut][boyut];
    
    for (i = 0; i < boyut; i++)
        for (j = 0; j <boyut ; j++)
            deger = deger + ((*(ptr+ i * satirSayisi1 + j)) * (*(ptr2+ i * satirSayisi2 + j))) ; // matris1[i][j] * matris2[i][j] = -74
            matris3[0][0] = deger; // matris3 doldurma
            
    
    for (i = 0; i < boyut; i++){
            for (j = 0; j < boyut; j++)
                printf("matris[0][0] %d ", matris3[0][0]); // matris3 ekrana bastirma
               
        printf("\n");
    }
    printf("deger = %d\n",deger);
    
    return 0;
}


