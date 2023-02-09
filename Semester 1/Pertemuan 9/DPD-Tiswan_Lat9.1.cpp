/*
   Latihan Praktikum 9.1 D
   Nama  : Tiswan
   Kelas : S1-D
   STMIK TASIKMALAYA - 2022
*/

  typedef unsigned short int angka_tn;
  angka_tn i, btsData_tn;
  char ulangi_tn = 'Y';
#include <stdio.h>
#include <stdlib.h>
int main() {
	do {
		system ("cls");
	printf ("---------------------------------------------------\n");
	printf ("*                  PRAKTIKUM 9.1:                 *\n");
	printf ("*           LATIHAN - WHILE & DO WHILE            *\n");
	printf ("---------------------------------------------------\n");
	printf (" Input Batas Data : ", btsData_tn);
	scanf ("%d", &btsData_tn);
	printf (" Cetak %d Bilangan : \n", btsData_tn);
	
	i = 1;
	while (i <= btsData_tn) {
		printf (" %7d \n", i);
		i++;
	}
	
	tanya:
		fflush(stdin);
	printf (" Ulangi Isian Data [Y/T]? = ");
	scanf ("%c", &ulangi_tn);
	
	if (ulangi_tn != 'Y' && ulangi_tn != 'T' && ulangi_tn == 'y' && ulangi_tn == 't') {
		printf (" Isian Salah [Ketik 'Y' atau 'T']\n\n");
		goto tanya;
		break;
	}
    } while (ulangi_tn == 'Y' || ulangi_tn == 'y');
   
   printf ("\n");
   printf ("---------------------------------------------------\n");
   printf ("*           T E R I M A - K A S I H               *\n");
   printf ("---------------------------------------------------\n");
	system("pause > null");	
	return 0;
}