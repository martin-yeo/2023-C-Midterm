#include <stdio.h>

int checkParen(const char* str);

int main(void)
{
	char str[10][256] = {
		"(())", "(()()()(()))", "(()))"
	};

	for (int i = 0; str[i][0] != '\0'; i++) {
		printf("%s : %d\n", str[i], checkParen(str));
	}
	return 0;
}

int checkParen(const char* str) {
	int count = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '(') count++;
		else if (str[i] == ')') count--;
		
		// 위의 두 줄을 아래의 한 줄로 대체할 수 있다.
		//(str[i] == '(') ? count++ : count--;

		if (count < 0) return 0;
	}
	return (count == 0) ? 1 : 0;
}