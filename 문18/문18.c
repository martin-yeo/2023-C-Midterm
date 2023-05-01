#include <stdio.h>

int checkParen(const char* str);

int main(void)
{
	char str[10][256] = {
		"(())", "(()()()(()))", "(()))",
		"()()()(((((((())))"
	};

	for (int i = 0; str[i][0] != '\0'; i++) {
		printf("%s : %d\n", str[i], checkParen(str[i]));
	}
	return 0;
}

int checkParen(const char* str) {
	int count = 0;
	int len = strlen(str);

	for (int i = 0; i < len; i++) {
		//if (str[i] == '(') count++;
		//else count--;
		// ���� �� ���� �Ʒ��� �� �ٷ� ��ü�� �� �ִ�.
		(str[i] == '(') ? count++ : count--;

		if (count < 0) return 0;
	}
	
	//if (count == 0) return 1;
	//else return 0;
	return (count == 0) ? 1 : 0;
}