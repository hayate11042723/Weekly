#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/// <summary>
/// prob1-1
/// </summary>
/*
void main() {
	printf("中原颯希\n");
}
*/


/// <summary>
/// prob1-2
/// </summary>
///
/*
void main() {
	printf("123\n456\n789\n");
}
*/


/// <summary>
/// prob1-3
/// </summary>
/*
void main() {
	printf("%d + %d = %d\n", 1, 1, 1 + 1);
	printf("%d + %d = %d\n", 2, 3, 2 + 3);
}
*/


/// <summary>
/// prob1-4
/// </summary>
/*
void main() {
	printf("%d+%d+%d=%d\n", 1, 2, 3, 1 + 2 + 3);
}
*/


/// <summary>
/// prob2-1
/// </summary>
/*
void main() {
	int a, b;
	printf("a =");
	scanf_s("%d", &a);
	printf("b =");
	scanf_s("%d", &b);
	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a %% b = %d\n", a % b);
}
*/


/// <summary>
/// prob2-2
/// </summary>
/*
void main() {
	int a, b;
	printf("長方形の幅：");
	scanf_s("%d", &a);
	printf("長方形の高さ：");
	scanf_s("%d", &b);
	printf("長方形の面積は、%dｍ2です。\n", a * b);
}
*/


/// <summary>
/// prob3-1
/// </summary>
/*
void main() {
	int a;
	scanf_s("%d", &a);
	if (a >= 5)
	{
		printf("5以上です。\n");
	}
}
*/


/// <summary>
/// prob3-2
/// </summary>
/*
void main() {
	int a;
	scanf_s("%d", &a);
	if (a < 1, a>1) {
		printf("1ではありません\n");
	}
}
*/


/// <summary>
/// prob3-3
/// </summary>
/*
void main() {
	int a;
	scanf_s("%d", &a);
	if (a < 50) {
		printf("５０未満です\n");
	}
}
*/


/// <summary>
/// prob3-4
/// </summary>
/*
void main() {
	int a;
	scanf_s("%d", &a);
	if (a <= 10) {
		printf("１０以下か９０以上です\n");
	}
	else if (a >= 90) {
		printf("１０以下か９０以上です\n");
	}
}
*/


/// <summary>
/// prob3-5
/// </summary>
//void main() {
//	int a;
//	scanf_s("%d", &a);
//	if (a >= 20, a < 80) {
//		printf("20以上80未満です");
//	}
//}



/// <summary>
/// prob3-6
/// </summary>
//void main() {
//	int n;
//	srand((unsigned)time(NULL));
//	n = rand() % 6 + 1;
//	printf("数値：%d\n", n);
//	if (n >= 3) {
//		printf("3以上です。\n");
//	}
//}


/// <summary>
/// prob3-7
/// </summary>
//void main() {
//	int n;
//	srand((unsigned)time(NULL));
//	n = rand() % 10 + 1;
//	printf("数値：%d\n", n);
//	if (n >= 5) {
//		printf("5以上です。");
//	}
//	else
//	{
//		printf("5未満です。");
//	}
//}


/// <summary>
/// prob3-8
/// </summary>
//void main() {
//	int n;
//	srand((unsigned)time(NULL));
//	n = rand() % 10 + 1;
//	printf("数値：%d\n", n);
//	if (n == 1) {
//		printf("1です");
//	}
//	else
//	{
//		printf("1ではありません");
//	}
//}


/// <summary>
/// prob3-9
/// </summary>
//void main() {
//	int n;
//	srand((unsigned)time(NULL));
//	n = rand() % 100 + 1;
//	printf("数値：%d\n", n);
//	if (n < 50) {
//		printf("50未満です。");
//	}
//	else {
//		printf("50以上です。");
//	}
//}


/// <summary>
/// prob3-10
/// </summary>
//void main() {
//	int n;
//	srand((unsigned)time(NULL));
//	n = rand() % 100 + 1;
//	printf("数値：%d\n", n);
//	if (n <= 10) {
//		printf("10以下か90以上の値です。");
//	}
//	else if (n >= 90) {
//		printf("10以下か90以上の値です。");
//	}
//	else {
//		printf("10より大きく90未満です。");
//	}
//}


/// <summary>
/// prob3-11
/// </summary>
//void main() {
//	int n;
//	srand((unsigned)time(NULL));
//	n = rand() % 100 + 1;
//	printf("数値:%d\n", n);
//	if (n >= 20 && 80 > n)
//	{
//		printf("20以上80未満です");
//	}
//	else
//	{
//		printf("20未満か80以上です");
//	}
//}


/// <summary>
/// prob3-12
/// </summary>
void main() {
	int n;
	srand((unsigned)time(NULL));
	n = rand() % -10 - 10;
	printf("数値:%d\n", n);
	if (n > 0)
	{
		printf("正の数です");
	}
	else if (n < 0) {
		printf("負の数です");
	}
	else
	{
		printf("0です");
	}
}



