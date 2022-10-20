/*
  Latihan Praktikum 4.2 D - KONVERSI HARI
  Nama  : Tiswan
  Kelas : S1 - D
  STMIK TASIKMALAYA - 2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	}

	short int hari, th, bln, sisa_;
	int main () {
	printf("=========================================\n");
	printf(" =+   LATIHAN P04.2 - KONVERSI HARI    +=\n");
	printf("=========================================\n");
	printf("Input hari : ");
	gotoxy(20,3);printf("hari");
	gotoxy(13,3);scanf("%i", &hari);
	
	th = hari / 365;
	sisa_ = hari % 365;
	bln = sisa_ / 30;
	sisa_ = sisa_ % 30;
	
	printf("%i Hari = %i Tahun %i Bulan %i Hari\n", hari, th, bln, sisa_);
	printf("\n\n");
	
	system("pause > null | echo Tekan Sembarang Tombol ...");
	
	printf("\n\n");
	printf("=========================================\n");
	printf("=      P04.2 - HASIL KONVERSI HARI      =\n");
	printf("=========================================\n");
	printf("=   INPUT   |   TH   |   BLN   |   HARI =\n");
	printf("-----------------------------------------\n");
	printf("=    %-7i| ", hari);
	printf("   %-4i|  ", th);
	printf("   %-4i|   ", bln);
	printf(" %-4i=\n", sisa_);
	printf("=========================================\n");
	
	
	
	
	
	return 0;
}