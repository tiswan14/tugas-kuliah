/*
  Latihan Praktikum 12 D 
  Nama  : Tiswan
  Kelas : S1 - D
  NPM   : 432007006220186
  
  STMIK TASIKMALAYA - 2022
*/
#include <stdio.h>
#include <stdlib.h>
#include "Goto_tn.c"

typedef unsigned short int angka_tn;
angka_tn x = 3, y = 1;
angka_tn i, j;
angka_tn jmlOrder_tn[10];

typedef unsigned long int price_tn;
price_tn hrgMenu_tn[10], byaOrder_tn[10];
price_tn totBiaya_tn, bayar_tn, kembali_tn, totOrder_tn;

char addTrans = 'Y', ulangi = 'Y';
char idKasir_tn[8], nmKasir_tn[35], idMenu_tn[10];
char tempData_tn[35], nmCust_tn[10][35], nmMenu_tn[10][20];


int main () {
	do {
		x = 3, y = 1; totBiaya_tn = 0;
		system("cls");
		
	//Input Data
	tn(x, y);  printf("=============================================================================");
	tn(x, ++y);printf("*                           \"Friend's Zone\" Cafe                            *");
	tn(x, ++y);printf("*            Jl. RE. Martadinata No. 272D - Indihiang , Tasikmalaya         *");
	tn(x, ++y);printf("=============================================================================");
	

	
	tn(x, y += 2);printf("---------------------------");
	tn(x, ++y);	  printf("+ Input Data Kasir + ");
	tn(x, ++y);	  printf("---------------------------");
	
	tn(x, ++y);printf(" ID Kasir       : ");
	scanf ("%s", &idKasir_tn);
	
	if (strcmp(idKasir_tn, "FZC-D01") == 0) {
		strcpy(nmKasir_tn, "Tiswan");
	} else if (strcmp(idKasir_tn, "FZC-D02") == 0) {
		strcpy(nmKasir_tn, "Julian P.");
	} else if (strcmp(idKasir_tn, "FZC-D03") == 0) {
		strcpy(nmKasir_tn, "Ade Taofik");
	} else {
		strcpy(nmKasir_tn, "#-Anonym-#");
	}

	tn(x, ++y); printf (" Nama Kasir     : %s", nmKasir_tn);
	fflush(stdin);
	

	
	tn(x, y += 2);printf("---------------------------");
	tn(x, ++y);	  printf(" Input Data Order - [%d]", i+1);
	tn(x, ++y);	  printf("---------------------------");
	tn(x, ++y);printf("  Nama Customer : ");
	gets(tempData_tn);
	strcpy(nmCust_tn[i], tempData_tn);
	
	
	
	order:
		fflush(stdin);
		tn(x, ++y);printf ("  ID Menu [A-C] : "); scanf ("%c", &idMenu_tn[i]);
	
	switch (idMenu_tn[i]) {
		case 'A': case 'a':
			strcpy(nmMenu_tn[i], "Bobba Latea");
			hrgMenu_tn[i] = 22000;
			break;
			
		case 'B': case 'b':
			strcpy(nmMenu_tn[i], "Pizza Noodles");
			hrgMenu_tn[i] = 35000;
			break;
		
		case 'C': case 'c':
			strcpy(nmMenu_tn[i], "Rice Race");
			hrgMenu_tn[i] = 30000;
			break;
		
		default:
			tn(x+2, ++y); printf ("#- Salah Input ID -#");
			tn(x+2, ++y); printf ("#- Pilih ID [A-C] saja -#");
			goto order;
		}
		
	tn(x, ++y); printf ("  Nama Menu     : %s", nmMenu_tn[i]);	
	tn(x, ++y); printf ("  Harga         : %d", hrgMenu_tn[i]);	
	fflush(stdin);
	
	
	
	tn(x + 10, y + 1); printf ("porsi");
	tn(x, ++y); printf ("  Jml. Order    :  "); scanf ("%d.00", &jmlOrder_tn[i]);
	

	
	                                                    
	fflush(stdin);
	tn(x, y += 2); printf (" Tambah Transaksi [Y/T]? "); scanf ("%c", &addTrans);
	i++;

		   
	byaOrder_tn[j] = hrgMenu_tn[j] * jmlOrder_tn[j];
	totOrder_tn += byaOrder_tn[j];
	
	x = 3, y = 1;
	


	tn(x, ++y); printf (" Jumlah Transaksi : %d", i);
	
	for (j = 0;j < i; j++) {
	
	tn(x, y += 2);printf("---------------------------");
	tn(x, ++y);	  printf("   Detail Transaksi    [%d]", j+1);
	tn(x, ++y);	  printf("---------------------------");
	
	tn(x, ++y); printf (" - Customer         : %s", nmCust_tn[j]);
	tn(x, ++y); printf (" - Menu             : [%c] - %s", idMenu_tn[j], nmMenu_tn[j]);
	tn(x, ++y); printf (" - Harga            : Rp. %9.2f", (float)hrgMenu_tn[j]);
	tn(x, ++y); printf (" - Jml. Order       : %d  porsi", jmlOrder_tn[j]);
	tn(x, ++y); printf (" -      Biaya       : Rp. %9.2f", (float)byaOrder_tn[j]);
	tn(x, ++y); printf (" -------------------------------------");
	
	
	}
	
	
	
} while (ulangi == 'Y' || ulangi == 'y');

	
	tn(x, ++y);printf ("****************************************************************************");
	tn(x, ++y); printf ("Martadinata No. 272D - Indihiang , Tasikmalaya         *");
	tn(x, ++y);printf ("****************************************************************************");
	


	tn(x + 40, ++y);printf (" .: Total Order : Rp.%12.2f ", (float)totOrder_tn);
	tn(x + 40, ++y);printf ("    Uang Bayar  : Rp.    "); scanf (" %d", &bayar_tn);
	
	tn(x + 40, ++y);printf ("    Uang Bayar  : Rp. %12.2f", (float)bayar_tn);


	kembali_tn = bayar_tn - totOrder_tn;
	tn(x + 40, ++y);printf ("    Kembali     : Rp.%12.2f", (float)kembali_tn);
	
	tn(x , ++y);printf ("****************************************************************************");
	tn(x , ++y);printf ("                  Diinput oleh : [%s  -  %s]", idKasir_tn, nmKasir_tn);
	tn(x , ++y);printf ("****************************************************************************");
	fflush (stdin);
	tn(x, y+= 2); printf ("Ulangi Program Cafe [Y/T]? ");
	   scanf ("%d", &ulangi);
	tn(x, ++y); printf ("****************************************************************************");
	tn(x, ++y);printf ("#- Created By -#");
	tn(x, ++y);printf ("   Nama : Tiswan");
	tn(x, ++y);printf ("   NPM  : 432007006220186");
	tn(x, ++y);printf ("   Kelas : S1-D");
	tn(x, ++y);printf ("   STMIK TASIKMALAYA - 2022");
	tn(x, ++y);printf("=============================================================================");
	tn(x, ++y);printf("x                    S T M I K  T A S I K M A L A Y A                       x");
	tn(x, ++y);printf("x                             2022 - 2023                                   x");
	tn(x, ++y);printf("=============================================================================");
			
	return 0;
 }
