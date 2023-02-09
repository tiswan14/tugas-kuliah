/*
   Latihan Praktikum 9.2 D
   Nama  : Tiswan
   Kelas : S1-D
   STMIK TASIKMALAYA - 2022
*/
#include <stdio.h>
#include <stdlib.h>

    typedef unsigned short int angka_tn;
    angka_tn btsData_tn, i, total_tn, count_tn;
    char ulangi_tn = 'Y';

int main() {
	do {
		system ("cls");
	printf ("---------------------------------------------------\n");
	printf ("*              P09.2D: TUGAS MANDIRI              *\n");
	printf ("*     PROGRAM BIL, GANJIL - WHILE & DO WHILE      *\n");
	printf ("---------------------------------------------------\n");
	
	printf (" Input Batas Data  : ");
	scanf ("%d", &btsData_tn);
	
	count_tn = 0;
	printf (" Cetak Bilangan Ganjil\n");
	i = 1;
	while (i <= btsData_tn) {
	count_tn++;
	printf (" %d ", i);
	i+=2;
    }
    printf ("\n Total Bilangan Ganjil = %d buah", count_tn);
    printf("\n");
    tanya:
    	fflush(stdin);
    	printf ("\n Ulangi Isian Data [Y/T]? = ");
    	scanf ("%c", &ulangi_tn);
    
    if (ulangi_tn != 'Y' && ulangi_tn != 'T') {
    	printf (" Isian Salah [Ketik 'Y' atau 'T']");
    	goto tanya;
    	break;
	}
	
} while (ulangi_tn == 'Y' || ulangi_tn == 'y');
	
	printf ("\n---------------------------------------------------\n");
	printf ("#- Created By -#\n");
	printf ("   Nama  : Tiswan\n");
	printf ("   NPM   : 432007006220186\n");
	printf ("   Kelas : S1-D\n\n");
	printf ("   STMIK TASIKMALAYA - 2022\n");
	printf ("---------------------------------------------------\n");
	printf ("*             T E R I M A - K A S I H             *\n");
	printf ("---------------------------------------------------\n");
	
	system ("pause > null");	
	return 0;
}