#include <stdio.h>

int main(void)
{
	
	printf("===����11===\n");
	// ����11
	int x, y;
	for (x = 0; x < 3; x++) {
		for (y = 0; y <= 2; y++) {
			printf("x=%d, y=%d \n", x, y);
		}
		printf("*---*---*\n");
	}

	printf("\n===����12===\n");
	// ���� 12
	int z = 0;
	switch (z) {
	case  0: printf("A\n");
	case  1: printf("B\n");  break;
	default: printf("C\n");  break;
	}

	printf("\n===����13===\n");
	// ���� 13
	int k = 10;
	printf("%d \n", k++);
	printf("%d \n", --k);
	printf("%d \n", k *= 3);

	return 0;
}
