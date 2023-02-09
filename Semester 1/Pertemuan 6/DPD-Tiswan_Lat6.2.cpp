#include <stdio.h>
#include <stdlib.h>

    int tarifPertama_tn, tarifKedua_tn, tarifKetiga_tn, tarifdiAtas31_tn, pemakaian_tn, totalTagihan_tn;
    int biayaAdmin_tn = 17500; 

int main() {
    
		
	printf("#=========================================================#\n");
	printf("#           PO6.2 D : TUGAS MANDIRI - PDAM                #\n");
	printf("#=========================================================#\n");
	printf("\n");
	
	printf("   Input Pemakaian (M3)  : ");
	scanf("%d", &pemakaian_tn);
	
	printf("\n");
	
	if(pemakaian_tn < 10){
		tarifPertama_tn = 6000 * pemakaian_tn;
	}else if(pemakaian_tn < 20){
		tarifKedua_tn = 5000 * (pemakaian_tn - 10);
	}else if(pemakaian_tn < 30){
		tarifKetiga_tn = 3000 * (pemakaian_tn - 20);
	}else if(pemakaian_tn > 30){
		tarifdiAtas31_tn = 2000 * (pemakaian_tn - 30);
	}
	
	
	if(pemakaian_tn >= 10){
		tarifPertama_tn = 60000;
	}
	if(pemakaian_tn >= 20){
		tarifKedua_tn = 50000;
	}
	if(pemakaian_tn >= 30){
		tarifKetiga_tn = 30000;
	}
	
	
	printf("*----------------------------------------------------------*\n");
	printf("*--- Biaya 10 M3     (I)   : Rp. %d                  ---*\n", tarifPertama_tn);
	printf("*--- Biaya 10 M3    (II)   : Rp. %d                  ---*\n", tarifKedua_tn);
	printf("*--- Biaya 10 M3   (III)   : Rp. %d                  ---*\n", tarifKetiga_tn);
	printf("*--- Biaya Diatas 30 M3    : Rp. %d                  ---*\n", tarifdiAtas31_tn);
	printf("*----------------------------------------------------------*\n");
	
	
	printf("**   Adm Fee/Bln           : Rp. %d                    **\n", biayaAdmin_tn);
	
	totalTagihan_tn = tarifPertama_tn + tarifKedua_tn + tarifKetiga_tn + tarifdiAtas31_tn + biayaAdmin_tn;
	printf("**   Total Tagihan         : Rp. %d                    **\n", totalTagihan_tn);
	printf("*----------------------------------------------------------*\n");
	
	printf("\n");
	printf("\n");
	printf("#+===============================+#\n");
	printf("    Created By\n");
	printf("    Nama   : Tiswan\n");
	printf("    NPM    : 432007006220186\n");
	printf("    Kelas  : S1-D");
	printf("\n");
	printf("   STMIK TASIKMALAYA - 2022\n");
	printf("#+===============================+#");
	return 0;
}