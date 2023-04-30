#include <stdio.h>

int fibo(int n);
int i_fibo(int n);

int main(void)
{
	printf("===����14===\n");
	// ���� 14
	int a, b, sum;						   // �������� a, b, sum ����
	printf("������ �Է��Ͻÿ� : "); // ����� �ȳ� �޽��� ���
	scanf_s("%d", &a);  // ù ��° ���� a �Է¹ޱ�
	printf("������ �Է��Ͻÿ� : "); // ����� �ȳ� �޽��� ���
	scanf_s("%d", &b);  // �� ��° ���� b �Է¹ޱ�
	sum = a + b;  // �հ� sum ���
	printf("�հ�� %d�Դϴ�. \n", sum);  // �հ� ���

	printf("\n===����15===\n");
	// ���� 15
	printf("fibo(11) : %d\n", fibo(11)); // 11��° �Ǻ���ġ ���� ���(����Լ�)
	printf("i_fibo(11) : %d\n", i_fibo(11));; // 11��° �Ǻ���ġ ���� ���(�ݺ���)

	printf("\n===����16===\n");
	// ���� 16 
	int dan = 7, t = 1;
	printf("===7��===\n");
	while (t < 9) {
		printf("%d x %d = %2d\n", dan, t, dan * t);
		t++;
	}
	//for (int i = 1; i <= 9; i++) {
	//	printf("%d x %d = %2d\n", dan, i, dan * i);
	//}

	return 0;
}

//a_0, a_1, a_2, ...
int fibo(int n) {
	if (n == 0 || n == 1) return 1;
	else return fibo(n - 1) + fibo(n - 2);
}

int i_fibo(int n) {
	if (n == 0 || n == 1) return 1;
	int i, fib1 = 1, fib2 = 1, fib;
	for (i = 2; i <= n; i++) {
		fib = fib1 + fib2;
		fib2 = fib1;
		fib1 = fib;
	}
	return fib;
}