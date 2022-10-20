/*
  Latihan Praktikum 4.1 D
  Nama  : Tiswan
  Kelas : S1 - D
  STMIK TASIKMALAYA - 2022
*/


#include <stdio.h>
#include <stdlib.h>

short int A = 0, B, C;


int main () {
    
    printf("Input nilai [A] = ");
    scanf("%d", &A);
    
    printf("Input nilai [B] & [C] = ");
    scanf("%i %i", &B, &C);
    
    
    A += 10;  
    printf("\n");
    printf("  [A] = %d \t", A);
    printf("  [B] = %i \t", B);
    printf("  [C] = %i \n", C);
	printf("\n");
	system("pause > null | echo Tekan sembarang tombol ...");
	
	printf("\n");
	printf(" [A] = %i \n", A);	
	
	B = A * C;
	printf(" [B] = A * C = ");
	printf(" %d * %d = %d \n", A, C, B);
	
	C = B / 5;
	printf(" [C] = B / 5 = ");
	printf(" %i / 5  = %i \n", B, C);
	
    C = B % 5;
    printf(" [C] = B %% 5 = ");
    printf(" %d %% 5 = %d \n", B, C);
	
	printf("\n");
	system("pause > null | echo Tekan sembarang tombol ...");
	printf("\n");
	printf(" [A]   = %i \n", A);
	printf(" [A++] = %i \t", A++);
	printf(" [A]   = %i \n", A);
	
	printf("\n");
	printf(" [B]   = %i \n", B);
	printf(" [++B] = %i \t", ++B);
	printf(" [B]   = %i \n", B);
	printf(" [B--] = %i \t", B--);
	printf(" [B]   = %i \n", B);
	return 0;
}