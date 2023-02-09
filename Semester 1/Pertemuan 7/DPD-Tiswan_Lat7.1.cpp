/*
  Latihan Praktikum 7.1 D 
  Nama  : Tiswan
  Kelas : S1 - D
  STMIK TASIKMALAYA - 2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


     char jrsid_tn;
     int biaya_tn;
     
     char jrsnama_tn[35];
     char mhsid_tn[7];
     char mhsnama_tn[35];
     char mhskls_tn[3];
     char mhskontak_tn[16];

int main () {
	printf("=======================================================\n");
	printf("=+       PRAKTIKUM 7.1: STATEMENT CASE               +=\n");
	printf("=======================================================\n");
	printf("Input ID Mhs   = "); scanf("%s", &mhsid_tn);
	fflush(stdin);
	printf("Ketik ID [1-4] = "); scanf("%c", &jrsid_tn);
	printf("\n");
	system("pause > null | echo Tekan Enter ... ...");

	if(strcmp(mhsid_tn, "D-101") ==  0){
		strcpy(mhsnama_tn, "Dewi Yuliana");
		strcpy(mhskls_tn, "D1");
		strcpy(mhskontak_tn, "+6281112131415");
		
	}else if(strcmp(mhsid_tn, "D-102") == 0){
		strcpy(mhsnama_tn, "Julian Permana");
		strcpy(mhskls_tn, "D2");
		strcpy(mhskontak_tn, "+6281082083084");
	
	}else if(strcmp(mhsid_tn, "D-103") == 0){
		strcpy(mhsnama_tn, "Tiswan");
		strcpy(mhskls_tn, "D3");
		strcpy(mhskontak_tn, "+6281334456767");
	
	}else if(strcmp(mhsid_tn, "D-104") == 0){
		strcpy(mhsnama_tn, "Ahmad Sobirin");
		strcpy(mhskls_tn, "D4");
		strcpy(mhskontak_tn, "+62845678785324");
		
	}else {
		strcpy(mhsnama_tn, "# Uknown #");
		strcpy(mhskls_tn, "- ? -");
		strcpy(mhskontak_tn, "---");
	}
	
	
	switch(jrsid_tn) {
		case '1':
			strcpy(jrsnama_tn, "D3 - Komputer Akutansi");
			biaya_tn = 3250000;
			break;
		
		case '2':
			strcpy(jrsnama_tn, "D3 - TKJ");
			biaya_tn = 3000000;
			break;
			
		case '3':
			strcpy(jrsnama_tn, "S1 - Teknik Informatika");
			biaya_tn = 3700000;
			break;
		case '4':
			strcpy(jrsnama_tn, "S1 - Sistem Informasi");
			biaya_tn = 3300000;
			break;
		
		default :
		    strcpy(jrsnama_tn, "# Salah Ketik ID #");
		    biaya_tn = 0;
		    break;
	}
	
	printf("\n");
	
	system ("cls");
	printf("=======================================================\n");
	printf("=+          HASIL AKHIR : STATEMENT - CASE           +=\n");
	printf("=======================================================\n");
	printf("  ID Mahasiswa = %s\n", mhsid_tn);
	printf("Nama Mahasiswa = %s\n", mhsnama_tn);
	printf("         Kelas = %s\n", mhskls_tn);
	printf("    No. Kontak = %s\n", mhskontak_tn);
	
	printf("\n");
	printf("Jurusan Kuliah = %s\n", jrsnama_tn);
	printf("         Biaya = Rp. %d\n", biaya_tn);
	
	printf("\n");
	system("pause > null | echo Tekan tombol Enter 2x untuk close ...");
	return 0;
}