#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {

	char K1, K2;
	
	printf("Masukkan Karakter Pertama       : ");
	K1 = _getch();
	printf("\n");

	printf("Masukkan Karakter Kedua         : ");
	K2 = _getche();
	printf("\n");

	printf("Karakter yang dimasukkan adalah : %c dan %c \n\n", K1, K2);

	_getch();
	return 0;
}