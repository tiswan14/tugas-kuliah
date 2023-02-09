/*
  Nama  : Tiswan
  NPM   : 432007006220186
  Kelas : S1 - D
  
  PRAKTIKUM 8.2 LATIHAN FOR
  STMIK TASIKMALAYA - 2022
*/


#include <stdio.h>
#include <stdlib.h>
#include "math.h"
    typedef unsigned long int angka_tn;
    angka_tn maksData_tn, nilaiPangkat_tn, nilai_tn, i, perkalian_tn = 1, penjumlahan_tn = 0;

int main() {
	printf("=---------------------------------------------------=\n");
	printf("=          PRAKTIKUM 8.2: LATIHAN - FOR             =\n");
	printf("=---------------------------------------------------=\n");
	printf(" Input Maks Data  : ");  scanf("%d", &maksData_tn);
	printf(" - Nilai Pangkat  : ");  scanf("%d", &nilaiPangkat_tn);
	printf("\n\n");
	printf(" # Angka #        #  Pangkat  #      #    Nilai   #\n");
	
	for (i = 1; i <= maksData_tn; i++) {
	    printf(" %5d ", i);
	    
	    printf(" %16d^%d", i, nilaiPangkat_tn);
	    
	    nilai_tn = pow(i, nilaiPangkat_tn);
		printf(" %18d", nilai_tn); 
	    printf("\n");   
	}
	printf("\n");
	
	system("pause > null | echo .... ... .. .  Tekan Sembarang Tombol  . .. ... ....\n");
	printf("=---------------------------------------------------=\n\n");
	
	//Perkalian
	printf(" #. Perkalian %d bilangan (dari 1 - %d)\n", maksData_tn, maksData_tn);
	for (i = 1; i <= maksData_tn; i++) {
		nilai_tn = i;	
		printf(" %d ", i);
		if(i == maksData_tn) 	
		    printf(" = ");
		else 
			printf(" * ");
			perkalian_tn = i * perkalian_tn;
    }           
    
    printf("%d", perkalian_tn);
      
      
    printf("\n\n");
    //Penjumlahan
    printf(" #. Penjumlahan %d bilangan Pangkat (^%d)\n", maksData_tn, nilaiPangkat_tn);
    for (i = 1; i <= maksData_tn; i++) {
    	nilai_tn = pow(i, nilaiPangkat_tn);
		printf(" %d ", nilai_tn);
		
		if(i == maksData_tn)
		   printf(" = ");
		else
		   printf(" + ");
		   penjumlahan_tn += pow(i, nilaiPangkat_tn);
	}
	printf("%d", penjumlahan_tn);
	
	printf("\n\n");
	printf("=---------------------------------------------------=\n");
	printf("  #-  CREATED BY  -#\n");
	printf("  Nama   : Tiswan\n");
	printf("  Kelas  : S1-D\n");
	printf("  Matkul : Pemograman Dasar\n\n");
	printf("  STMIK TASIKMALAYA - 2022\n");
	printf("=---------------------------------------------------=");
	
	return 0;
}