#include<stdio.h>
#include<locale.h>
int main(){
	 setlocale(LC_ALL, "Turkish");
	int kac;
	//kaç sayı giriliceğini sorar.
	printf("kaç sayı gireceksiniz:");
	scanf("%d", &kac);
	//değerleri diziye aktarır.
	int dizi[100];
	int i;
	for(i=0;i<kac;i++){
		printf(" sayi giriniz:");
		scanf("%d", &dizi[i]);
	//diziyi yazdırır.
	}
	int a;
	printf("dizinin sırasız hali:");
	for(a=0;a<kac;a++){
		printf("%d ", dizi[a]);
	}
	printf("\n\n");
    //dizideki elemanları sıralar.
	int b, key, j;	
	for(b=0;b<kac;b++){
	   	key = dizi[b];
	   	j=b;
	   	while(j>0 && key < dizi[j-1] ){
	   		dizi[j] = dizi[j-1];
	   		j--;
		   }
		dizi[j] = key;
	}
	//dizinin son halini yazdırır.
		printf("dizinin sıralı hali:");
	int c;
	for(c=0; c<kac;c++){
		printf("%d ", dizi[c]);
		
	}	
}
