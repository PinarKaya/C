#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "Turkish");
  int ilksayi = 1;
	int ikincisayi = 1;
	int i, n;
	
	printf(" sınır giriniz:");
	scanf("%d", &n);
  printf("%d\n%d\n", ilksayi, ikincisayi);
	
	for(i= 0; i<n; i++) {
		
		int toplama = ikincisayi;
		ikincisayi = ikincisayi + ilksayi;
		ilksayi = toplama;
		
		printf("%d\n", ikincisayi);
		
	}
	
	return 0;
}
