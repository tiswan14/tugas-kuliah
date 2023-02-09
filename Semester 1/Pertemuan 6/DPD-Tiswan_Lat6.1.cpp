/*
  Latihan Praktikum 6.1 D 
  Nama  : Tiswan
  Kelas : S1 - D
  STMIK TASIKMALAYA - 2022
*/

#include <stdio.h>
#include <stdlib.h>

    short int nilai1_tn, nilai2_tn, nilai3_tn, mins_tn, maxs_tn, nAkhir_tn;
    
    
int main () {
	char grade_tn;
    
	printf("========================================================================\n");
	printf("=+                    PRAKTIKUM 6.1: STATEMENT - IF                   +=\n");
	printf("========================================================================\n");
	printf(" Input Nilai 1 = "); scanf("%d", &nilai1_tn);
	printf(" Input Nilai 2 = "); scanf("%d", &nilai2_tn);
	printf(" Input Nilai 3 = "); scanf("%d", &nilai3_tn);
	
	printf("\n");
	system("pause > null | echo Tekan Enter .. ..");
	
	//mencari nilai terkecil
	if( (nilai1_tn < nilai2_tn) && (nilai1_tn < nilai3_tn) ){
		mins_tn = nilai1_tn;
	}else if ( (nilai2_tn < nilai1_tn) && (nilai2_tn < nilai3_tn) ){
		mins_tn = nilai2_tn;		
	}else if( (nilai3_tn < nilai1_tn) && (nilai3_tn < nilai2_tn) ){
		mins_tn = nilai3_tn;
	}else{
		mins_tn = 0;
	}
	printf("\n");
	printf(" Nilai Terkecil = %d\n", mins_tn);
	
	//mencari nilai terbesar
	if( (nilai1_tn > nilai2_tn) && (nilai1_tn > nilai3_tn) ){
	  maxs_tn = nilai1_tn;
		
	}else if ( (nilai2_tn > nilai1_tn) && (nilai2_tn > nilai3_tn) ){
	  maxs_tn = nilai2_tn;
		
	}else if( (nilai3_tn > nilai1_tn) && (nilai3_tn > nilai2_tn) ){
	  maxs_tn = nilai3_tn;

	}else{
	  maxs_tn = 0;
	}
    printf(" Nilai Terbesar = %d\n", maxs_tn);
    printf("\n");
    
    //mencari nilai akhir
	nAkhir_tn = (0.25 * nilai1_tn) + (0.35 * nilai2_tn) + (0.40 * nilai3_tn);
	printf(" Nilai Akhir    = %d\n", nAkhir_tn);
	
	//menentukan grade	
	if(nAkhir_tn >= 90){
		grade_tn = 'A';
	}else if(nAkhir_tn >= 80){
		grade_tn = 'B';		
	}else if(nAkhir_tn >= 70){
		grade_tn = 'C';
	}else if(nAkhir_tn >= 60){
		grade_tn = 'D';
	}else{
		grade_tn = 'E';
	}
	printf("       Grade    = %c\n", grade_tn);
	
	//Menentukan Keterangan
	if(nAkhir_tn >= 90){
		printf("  Keterangan    = \" LULUS MEMUASKAN \"");
	}else if(nAkhir_tn >= 80){
		printf("  Keterangan    = \" LULUS BAIK \"");
	}else if(nAkhir_tn >= 70){
		printf("  Keterangan    = \" LULUS \"");
	}else if(nAkhir_tn >= 60){
		printf("  Keterangan    = \" REMIDIAL \"");
	}else{
		printf("  Keterangan    = \" TIDAK LULUS \"\n");
	}
	printf("\n\n");
	
	system("pause > null | echo Tekan Sembarang Tombol untuk Close .. ..");
	
	return 0;
}