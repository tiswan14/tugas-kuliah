/*
   Latihan 10.2D
   Nama : Tiswan
   Kelas: D
   NPM  : 432007006220186
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef unsigned angka_tn;
angka_tn btsData_tn, i, j, k, counter;
char lagi_tn = 'Y';
char tampilan_tn;

int main() {
	while (lagi_tn == 'Y' || lagi_tn == 'y') {
		system("cls");
	
	printf ("---------------------------------------------\n");
	printf ("*              PRAKTIKUM 10.2:              *\n");
	printf ("*         LATIHAN - NESTED LOOPING          *\n");
	printf ("---------------------------------------------\n");
	
	printf (" Batas Matriks Data      : ");
	scanf ("%d", &btsData_tn);
	
	
	fflush(stdin);
	printf (" Pilihan Tampilan [1-3]  : ");
	scanf ("%c", &tampilan_tn);
	printf ("\n");
	
	printf ("\n");                                        
	
	switch (tampilan_tn) {
	    case '1':	
	    printf (" Cetak Matriks Bilangan Ganjil [ Tampilan - %c ]\n", tampilan_tn);
	         k = 1;
     	     for (i = 1;i <= btsData_tn;i++) {
     	     	for (j = 1;j <= btsData_tn;j++){
     	     		printf ("  %d\t", k);
     	     		k += 2;
				  }
				printf ("\n\n");
			  }
		break;
		
		
		
		case '2':
			printf (" Cetak Matriks Bilangan Ganjil [ Tampilan - %c ]\n", tampilan_tn);
			k = 1;
			for (i = 1; i <= btsData_tn; i++) {
				printf (" ");
				for (j = 1; j <= i; j++) {
					printf ("  %d\t", k);
					k += 2;
				}
				printf ("\n\n");
			}
		
		break;
		
		
		
		case '3':
			printf (" Cetak Matriks Bilangan Ganjil [ Tampilan - %c ]\n", tampilan_tn);
			k = 1;
			for (i = 1; i <= btsData_tn;i++) {
				printf (" ");
				for (j = i; j <= btsData_tn;j++) {
					printf ("  %d\t", k);
					k += 2;
				}
				printf ("\n\n");
			}
		break;
		
		
		default :
			printf ("\n Tidak Ada Pilihan %c\n", tampilan_tn);
			printf (" Ketik Pilihan [1-3] saja");
				
	}	
	printf ("\n");
	fflush(stdin);
	printf ("\n");
	printf(" Ulangi Program [Y/T] = ");
	scanf("%c", &lagi_tn);	
}
	printf ("\n");
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