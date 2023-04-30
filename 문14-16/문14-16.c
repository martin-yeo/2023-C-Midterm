#include <stdio.h>

int fibo(int n);
int i_fibo(int n);

int main(void)
{
	printf("===문제14===\n");
	// 문제 14
	int a, b, sum;						   // 정수변수 a, b, sum 선언
	printf("정수를 입력하시오 : "); // 사용자 안내 메시지 출력
	scanf_s("%d", &a);  // 첫 번째 정수 a 입력받기
	printf("정수를 입력하시오 : "); // 사용자 안내 메시지 출력
	scanf_s("%d", &b);  // 두 번째 정수 b 입력받기
	sum = a + b;  // 합계 sum 계산
	printf("합계는 %d입니다. \n", sum);  // 합계 출력

	printf("\n===문제15===\n");
	// 문제 15
	printf("fibo(11) : %d\n", fibo(11)); // 11번째 피보나치 수열 출력(재귀함수)
	printf("i_fibo(11) : %d\n", i_fibo(11));; // 11번째 피보나치 수열 출력(반복문)

	printf("\n===문제16===\n");
	// 문제 16 
	int dan = 7, t = 1;
	printf("===7단===\n");
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