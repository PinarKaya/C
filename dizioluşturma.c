#include<stdio.h>
int main() {
	
	int sayilar[5];
	int i;
	float toplam = 0.0;
  
	for(i=0; i<5; i++) {
		printf("sayi giriniz:");
		scanf("%d",&sayilar[i]);
		
	}
	printf("diziniz:");
	for(i=0; i<5; i++){
		printf("%d ", sayilar[i]);
	}
	for(i=0; i<5; i++) {
		toplam = toplam + sayilar[i];
	
	}	
	printf("dizideki sayilarin toplami: %2f dir", toplam);
	return 0;
  }
