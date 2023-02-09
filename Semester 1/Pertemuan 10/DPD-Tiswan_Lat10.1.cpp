/*
   Latihan 10.1D
   Nama : Tiswan
   Kelas: D
   NPM  : 432007006220186
*/
#include <stdio.h>
#include <stdlib.h>

typedef unsigned angka_tn;
angka_tn i, j, btsBaris_tn, btsKolom_tn;

char inisial_tn[10];
char lagi_tn = 'Y';

int main() {
	
	while (lagi_tn == 'Y' || lagi_tn == 'y') {
		system("cls");
	
	printf ("---------------------------------------------\n");
	printf ("*              PRAKTIKUM 10.1:              *\n");
	printf ("*         LATIHAN - NESTED LOOPING          *\n");
	printf ("---------------------------------------------\n");
	
	printf (" Batas Baris  : ");
	scanf ("%d", &btsBaris_tn);
	
	printf (" Batas Kolom  : ");
	scanf ("%d", &btsKolom_tn);
	
	printf ("\n");
	fflush(stdin);
	
	printf (" Inisial Kata : ");
	gets(inisial_tn);
	
	printf ("\n");
	printf (" #- Looping Inisial -#\n\n");
	for (i = 1; i <= btsBaris_tn;i++) {
		for (j = 1;j <= btsKolom_tn;j++) {
			printf ("%d-%s\t", i, inisial_tn);
		}
		printf ("\n\n");
	}
	
	printf ("\n");
	fflush(stdin);
	printf ("\n");
	printf ("Ulangi Program [Y/T]? ");
	scanf ("%c", &lagi_tn);
	printf("\n");
}

	printf ("---------------------------------------------\n");
	printf ("#- Created By -#\n");
	printf ("   Nama : Tiswan\n");
	printf ("   NPM  : 432007006220186\n");
	printf ("   Kelas : S1-D\n\n");
	printf ("   STMIK TASIKMALAYA - 2022\n");
	printf ("---------------------------------------------\n");
	printf ("*          T E R I M A - K A S I H          *\n");
	printf ("---------------------------------------------\n");
	system("pause > null");
	return 0;
}
