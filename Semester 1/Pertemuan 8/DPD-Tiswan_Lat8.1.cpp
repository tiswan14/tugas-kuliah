/*
  Nama  : Tiswan
  NPM   : 432007006220186
  Kelas : S1 - D
  
  PRAKTIKUM 8.1 - LATIHAN FOR
  STMIK TASIKMALAYA - 2022
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    typedef unsigned short int angka_tn;
    angka_tn y, h,minData_tn, maxData_tn, nilai_tn = 0;

int main() {
	printf("---------------------------------------------------\n");
	printf("        PRAKTIKUM 8.1: LATIHAN - FOR\n");
	printf("---------------------------------------------------\n");
	
	printf(" Input Minimal Data : ");  scanf("%d", &minData_tn);
	printf(" Input Max Data     : ");  scanf("%d", &maxData_tn);
	printf(" --------------------------\n");
	printf(" | Angka  = Hasil Kuadrat |\n");
	printf(" --------------------------\n");
	for (y = minData_tn; y <= maxData_tn; y++) {
	printf("  |  %-4d =", y);
	
	h = pow(y, 2);
	printf(" %7d \t |", h);
	printf("\n");
}
	
	printf("\n");
	printf(" #. Penjumlahan Kuadrat \n");
	printf("    ");
	for (y = 1; y <= maxData_tn; y++) {
		h = pow(y, 2);
		printf("%d", h);

		if (y == maxData_tn)
		printf(" = ");
		else
		 printf(" + ");
		nilai_tn += pow(y, 2);
	}
	printf("%d\n", nilai_tn);
	return 0;
}