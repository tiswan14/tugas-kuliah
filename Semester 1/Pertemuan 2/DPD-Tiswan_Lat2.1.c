 #include <stdio.h>
#define maxnilai 100

int main()
{
    int usia = 27;
    float bb = 54.3;
    char nilai = 'A';
    char nama[20] = "Tiswan";
    const int minim = 65;
    const char inisial[10] = "TN";
     

    printf("Usia  :%d\n", usia);
    printf("BB    :%f\n", bb);
    printf("Nilai :%c\n", nilai);
    printf("\n");
    printf("Nama     :%s\n", nama);
    printf("Max Nilai:%i\n", maxnilai);
    printf("Inisial  :%s\n", inisial);
    printf("Min Nilai:%i\n", minim);


    return 0;
}