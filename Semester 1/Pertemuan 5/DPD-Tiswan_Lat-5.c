/*
  Latihan Praktikum 5 D 
  Nama  : Tiswan
  Kelas : S1 - D
  STMIK TASIKMALAYA - 2022
*/
#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	}

int main () {
	
	char idkasir_tn[10];
	char namakasir_tn[35];
	char namacustomer_tn[35];
	char namamenu_tn[35];
	int harga_tn;
	int jmlorder_tn;
	int totalorder_tn;
	int uangbayar_tn;
	int kembalian_tn;
	
	//Input Data
	gotoxy(3, 1);printf("=============================================================================\n");
	gotoxy(3, 2);printf("*                           \"Friend's Zone\" Cafe                            *\n");
	gotoxy(3, 3);printf("*            Jl. RE. Martadinata No. 272D - Indihiang , Tasikmalaya         *\n");
	gotoxy(3, 4);printf("=============================================================================\n");
	
	gotoxy(3, 5);printf("---------------------------");
	gotoxy(6, 6);printf("+ Input Data Kasir + ");
	gotoxy(3, 7);printf("---------------------------");
	
	gotoxy(15, 8);printf("ID Kasir      : ");
	gets(idkasir_tn);
	
	gotoxy(15, 9);printf("Nama Kasir    : ");
	gets(namakasir_tn);
	
	
	gotoxy(3, 11);printf("---------------------------\n");
	gotoxy(6, 12);printf("+ Input Data Order +\n");
	gotoxy(3, 13);printf("---------------------------\n");
	
	gotoxy(15, 14);printf("Nama Customer : ");
	gets(namacustomer_tn);
	
	gotoxy(15, 15);printf("Nama Menu     : ");
	gets(namamenu_tn);
	
	gotoxy(15, 16);printf("Harga         : Rp. ");
	scanf("%i", &harga_tn);
	
	gotoxy(35, 17);printf("porsi");
	gotoxy(15, 17);printf("Jml. Order    : ");
	scanf("%i", &jmlorder_tn);
	
	
    gotoxy(3, 23);system("pause > null | echo Tekan Sembarang Tombol ...");
    
	//Output Data
	
    gotoxy(3, 30);printf("=============================================================================");
	gotoxy(3, 31);printf("*                          \"Friend's Zone\" Cafe                               *");
	gotoxy(3, 32);printf("*            Jl. RE. Martadinata No. 272D - Indihiang , Tasikmalaya         *");
	gotoxy(3, 33);printf("=============================================================================");
	
	gotoxy(15, 35);printf("Nama Costumer : %s", namacustomer_tn);
	gotoxy(3, 37);printf("----------------");
	gotoxy(3, 38);printf("# Detail Order #");
	gotoxy(3, 39);printf("----------------");
	gotoxy(10, 40);printf("Menu    : %s", namamenu_tn);
	gotoxy(10, 41);printf("Harga   : Rp. %i", harga_tn);
	
	gotoxy(25, 42);printf("porsi");
	gotoxy(10, 42);printf("Jumlah  : %i", jmlorder_tn);
	gotoxy(3, 43);printf("******************************************************************************");
	
	
	totalorder_tn = harga_tn * jmlorder_tn;
	gotoxy(54, 44);printf(".: Total Order : Rp. %i", totalorder_tn);
	
	gotoxy(54, 45);printf("   Uang Bayar  : Rp. ");
	scanf("%i", &uangbayar_tn); 
	
	kembalian_tn = uangbayar_tn - totalorder_tn;
	gotoxy(54, 47);printf("   Kembalian   : Rp. %i", kembalian_tn);
	
	
	gotoxy(3, 48);printf("******************************************************************************");
	
	gotoxy(3, 50);printf("Diinput oleh : [%s - %s]", idkasir_tn, namakasir_tn);
	
	gotoxy(3, 51);printf("=============================================================================");
	gotoxy(3, 52);printf("x                    S T M I K  T A S I K M A L A Y A                       x");
	gotoxy(3, 53);printf("x                             2022 - 2023                                   x");
	gotoxy(3, 54);printf("=============================================================================");
	
	gotoxy(3, 55);printf("#- Created By -#");
	gotoxy(6, 56);printf("Nama  : Tiswan");
	gotoxy(6, 57);printf("NPM   : 432007006220186");
	gotoxy(6, 58);printf("Kelas : S1-D");
	
	gotoxy(3, 59);printf("# STMIK TASIKMALAYA - 2022 #");
	
	gotoxy(3, 65);system("pause > null | echo Tekan Sembarang Tombol untuk Close ...");
	
	
	
	
	
	
	
	return 0;
}