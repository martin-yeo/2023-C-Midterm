#include <stdio.h>

int main(void)
{
	int cnt;
	while (1) {
		printf("�ݺ�Ƚ���� �Է��Ͻÿ�(1~26) [0�� ����]: ");
		int checkScan = scanf_s("%d", &cnt);
		
		// �������� üũ
		if (cnt == 0) break;

		// �߸��� �Է� üũ(�����Է�)
		if (checkScan < 1) {
			printf("�߸��� �Է��Դϴ�. ���ڸ� �Է����ֽʽÿ�.\n");
			char flushStr[256];
			scanf_s("%s", flushStr, sizeof(flushStr));
			continue;
		}

		// �߸��� �Է� üũ(���ڹ���)
		if (cnt < 1 || cnt > 26) {
			printf("1~26 ������ ���� �Է����ֽʽÿ�. \n");
			continue;
		}

		for (int i = 0; i < cnt; i++) {
			for (int k = cnt - 1; k > i; k--) {
				printf("%c", ' ');
			}
			// ���� for���� �Ʒ� printf()������ �� ��ü�� �� �ִ�.
			//printf("%*s", cnt - i, "");

			for (int k = 0; k <= i; k++) {
				printf("%c", 'A' + k);
			}
			printf("\n");
		}
	}

	return 0;
}
