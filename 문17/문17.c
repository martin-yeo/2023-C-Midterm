#include <stdio.h>

int main(void) {
	int cnt;
	while (1) {
		printf("�ݺ�Ƚ���� �Է��Ͻÿ�(1~26) [0�� ����]: ");
		int checkScan = scanf_s("%d", &cnt);
		
		// �������� üũ
		if (cnt == 0) break;

		for (int i = 0; i < cnt; i++) {
			for (int k = cnt - 1; k > i; k--) {
				printf("%c", ' ');
			}
			// ���� for���� �Ʒ� printf()������ �� ��ü�� �� �ִ�.
			//printf("%*s", cnt - i, "*");

			for (int k = 0; k <= i; k++) {
				printf("%c", 'A' + k);
			}
			printf("\n");
		}
	}

	return 0;
}
