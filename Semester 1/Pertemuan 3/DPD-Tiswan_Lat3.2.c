/*
Latihan Praktikum 03 - Bahasa C
Nama  :Tiswan
Kelas : S1-D
STMIK TASIKMALAYA 2022
*/

#include <stdio.h>
#include <windows.h>

#define inisial "TN"
#define YEAR 2022

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


int main()
{
    int npm;
    char nm_lengkap[15];
    char kelas;
    char jurusan[6];
    int nilai_akhir;
    
    const char COLLEGE[20] = "STMIK TASIKMALAYA";
    
    system("cls");
    
    gotoxy(20,10);printf("========================================================================");
    gotoxy(43,11);printf("P03 - TUGAS MANDIRI : %s", inisial);
    gotoxy(20,12);printf("========================================================================");
     
    gotoxy(20,15);printf("#- Input Data Mahasiswa -#\n");
    
    gotoxy(20,18);printf("NPM         : ");
    scanf("%d", &npm);
    
    fflush(stdin);
    gotoxy(20,19);printf("Nama        : ");
    gets(nm_lengkap);
    
    gotoxy(20,20);printf("Kelas       : ");
    scanf("%c", &kelas);
    
    fflush(stdin);
    gotoxy(20,21);printf("Jurusan     : ");
    gets(jurusan);
    
    gotoxy(20,23);printf("Nilai Akhir : ");
    scanf("%d", &nilai_akhir);
    
    
    
    
    
    
    gotoxy(20,40);printf("========================================================================");
    gotoxy(43,41);printf("P03 - TUGAS MANDIRI : %s\n", inisial);
    gotoxy(20,42);printf("========================================================================");
    gotoxy(34,44);printf("TTTTTTTTTTTTTTTTT   NNNN          NNNN\n");
    gotoxy(34,45);printf("TTTTTTTTTTTTTTTTT   NNNNNN        NNNN\n");
    gotoxy(34,46);printf("      TTTT          NNNN NN       NNNN\n");
    gotoxy(34,47);printf("      TTTT          NNNN  NN      NNNN\n");
    gotoxy(34,48);printf("      TTTT          NNNN   NN     NNNN\n");
    gotoxy(34,49);printf("      TTTT          NNNN     NN   NNNN\n");
    gotoxy(34,50);printf("      TTTT          NNNN       NN NNNN\n");
    gotoxy(34,51);printf("      TTTT          NNNN         NNNNN\n");
    gotoxy(34,52);printf("      TTTT          NNNN          NNNN\n");
    gotoxy(34,53);printf("      TTTT          NNNN          NNNN\n");
    gotoxy(20,54);printf("======================================================================");
    
    fflush(stdin);
    gotoxy(43,56);printf("NPM         : %d\n", npm);
    gotoxy(43,57);printf("Nama        : %s\n", nm_lengkap);
    gotoxy(43,58);printf("Kelas       : %c\n", kelas);
    gotoxy(43,59);printf("Jurusan     : %s\n", jurusan);
    gotoxy(43,60);printf("Nilai Akhir : %d\n", nilai_akhir);
    
    gotoxy(20,62);printf("======================================================================");
    gotoxy(43,63);printf("%s - %i", COLLEGE, YEAR);
    gotoxy(20,64);printf("======================================================================");

    return 0;
}