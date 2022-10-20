/*
  Latihan Praktikum 4.2 D - KONVERSI CELCIUS
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
	
int main () {
	float celcius, reamur, fahrenheit;
	printf("==========================================\n");
	printf("=           KONVERSI CELCIUS             =\n");
	printf("==========================================\n");
	printf("\n");
	
	gotoxy(8, 4);printf("Nilai : ");
	gotoxy(23, 4);printf("Celcius");
	gotoxy(16, 4);scanf("%f", &celcius);
	printf("\n");
    
    fahrenheit = 1.8 * celcius + 32;
    reamur = 0.8 * celcius;
	
	printf("==========================================\n");
	printf("=         HASIL KONVERSI SUHU            =\n");
	printf("==========================================\n");
	printf("=   Celcius   |   Reamur   | Fahrenheit  =\n");
	printf("------------------------------------------\n");
	gotoxy(5, 11);printf(" %0.1f     |", celcius);
	gotoxy(17, 11);printf("  %0.1f     |", reamur);
	gotoxy(30, 11);printf("   %0.1f    |", fahrenheit);
	printf("\n==========================================\n\n");
	
	system("pause > null | echo Tekan Sembarang Tombol Untuk Close ...");
	return 0;
}