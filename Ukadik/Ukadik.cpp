#include <stdio.h>

void bobek(int *moč) {
	printf("promenna moc ukazuje na adresu: %p\n", moč);
	printf("moc ukazuje v RAM na cislo: %d\n", *moč);
	int sperma = *moč;
	printf("pred:pomocna obsahuje: %d \n", sperma);
	sperma++;
	printf("po: pomocna obsahuje: %d \n", sperma);
	*moč = sperma;
}

int main()
{
	int cislo;
	int* ukazatel_na_cislo;
	cislo = 696;
	ukazatel_na_cislo = &cislo;
	printf("promenna cislo je na adrese: %p\n", ukazatel_na_cislo);
	printf("promenna cislo obsahuje: %d\n", *ukazatel_na_cislo);
	printf("promenna cislo obsahuje: %d\n", cislo);
	bobek(&cislo);
	printf("promenna cislo obsahuje: %d\n", cislo);
}

