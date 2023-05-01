#include <stdio.h>

int main(void) {
	int cnt;
	while (1) {
		printf("반복횟수를 입력하시오(1~26) [0은 종료]: ");
		int checkScan = scanf_s("%d", &cnt);
		
		// 종료조건 체크
		if (cnt == 0) break;

		for (int i = 0; i < cnt; i++) {
			for (int k = cnt - 1; k > i; k--) {
				printf("%c", ' ');
			}
			// 위의 for문을 아래 printf()문으로 로 대체할 수 있다.
			//printf("%*s", cnt - i, "*");

			for (int k = 0; k <= i; k++) {
				printf("%c", 'A' + k);
			}
			printf("\n");
		}
	}

	return 0;
}
