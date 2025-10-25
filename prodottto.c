#include <stdio.h>
int main()
{
	int a, b;
	int prodotto=1;
	printf("Inserisci i 2 numeri: ");
	scanf("%d %d", &a, &b);
	prodotto=a*b;
	printf("Il prodotto di due numeri e: %d \n", prodotto);
	return 0;
}
