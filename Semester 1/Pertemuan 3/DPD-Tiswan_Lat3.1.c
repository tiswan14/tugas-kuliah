/*
Latihan Praktikum 03 - Bahasa C
Nama  :Tiswan
Kelas : S1-D
STMIK TASIKMALAYA 2022
*/

#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{

    char nm_mhs[15];
    int tb_mhs;
    float bb_mhs;
   	char almt_mhs[55];
    float ipk_mhs;

    system("cls");
    gotoxy(5,5);printf("=========================================\n");
    gotoxy(5,6);printf("--------- P03 - Latihan IO Data ---------\n");
    gotoxy(5,7);printf("=========================================\n");

    gotoxy(7,9);printf("Input Nama Mahasiswa    : ");
    gets(nm_mhs);

    
    gotoxy(38,10);printf (" cm ");
	gotoxy(7,10);printf("Input TB (Tinggi Badan) : ");
    scanf("%d", &tb_mhs);
    
    printf("\n");
    
    gotoxy(38,11);printf (" kg ");
    gotoxy(7,11);printf("Input BB (Berat Badan)  : ");
    scanf("%f", &bb_mhs);
    
    fflush(stdin);
    gotoxy(7,12);printf("Input Alamat            : ", almt_mhs);
    gets(almt_mhs);

    gotoxy(7,13);printf("Input IPK               : ");
    scanf("%f", &ipk_mhs);
    


    gotoxy(7,15);printf("Hallo !! %s\n", nm_mhs);
    gotoxy(7,16);printf("Tinggi kamu %d cm \n", tb_mhs);
    gotoxy(7,17);printf("Berat Badan %0.2f kg \n", bb_mhs);
    gotoxy(7,18);printf("TB = %d cm, BB = %0.2f Kg\n", tb_mhs, bb_mhs);
    
    printf("\n");
    
    gotoxy(7,20);printf("Alamat Rumah di %s", almt_mhs);
    gotoxy(7,21);printf("Nilai IPK sekarang %0.2f\n", ipk_mhs);
    
    
    
    return 0;
}
