#include <stdio.h>
#define inisial "TN"
#define YEAR 2022

int main()
{
    int npm = 6220186;
    char namalengkap[20] = "Tiswan";
    char nmkelas = 'D';
    const char jurusan[20] = "S1-TI";
    const char COLLEGE[20] = "STMIK TASIKMALAYA";
    int nilai_akhir = 97;

    printf("\n");
    printf("======================================================================\n");
    printf("	 	     P02 - TUGAS MANDIRI :  %s\n", inisial);
    printf("======================================================================\n");
    printf("               TTTTTTTTTTTTTTTTT    NNNN          NNNN\n");
    printf("               TTTTTTTTTTTTTTTTT    NNNNNN        NNNN\n");
    printf("                      TTTT          NNNN NN       NNNN \n");
    printf("                      TTTT          NNNN  NN      NNNN\n");
    printf("                      TTTT          NNNN   NN     NNNN\n");
    printf("                      TTTT          NNNN     NN   NNNN\n");
    printf("                      TTTT          NNNN       NN NNNN\n");
    printf("                      TTTT          NNNN         NNNNN\n");
    printf("                      TTTT          NNNN          NNNN \n");
    printf("                      TTTT          NNNN          NNNN\n");
    printf("======================================================================\n");
    printf("                      NPM          : %i\n", npm);
    printf("                      Nama Lengkap : %s\n", namalengkap);
    printf("                      Kelas        : %c\n", nmkelas);
    printf("                      Jurusan      : %s\n", jurusan);
    printf("                      Tahun        : %i\n", YEAR);
    printf("                      Nilai Akhir  : %i\n", nilai_akhir);

    printf("\n======================================================================\n");
    printf("                       %s", COLLEGE);
    printf(" - %i\n", YEAR);
    printf("======================================================================");

    return 0;
}