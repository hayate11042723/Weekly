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
//void main() {
//	int n;
//	srand((unsigned)time(NULL));
//	n = rand() % 20 - 10;
//	printf("数値:%d\n", n);
//	if (n > 0)
//	{
//		printf("正の数です");
//	}
//	else if (n < 0) {
//		printf("負の数です");
//	}
//	else
//	{
//		printf("0です");
//	}
//}


/// <summary>
/// prob3-13
/// </summary>
//void main() {
//	int n;
//	srand((unsigned)time(NULL));
//	n = rand() % 3 + 1;
//	printf("数値：%d\n", n);
//	if (n == 1)
//	{
//		printf("グー\n");
//	}
//	if (n == 2)
//	{
//		printf("パー\n");
//	}
//	if (n == 3)
//	{
//		printf("チョキ\n");
//	}
//}


/// <summary>
/// prob3-14
/// </summary>
//void main() {
//	int a, b;
//	srand((unsigned)time(NULL));
//	a = rand() % 10 + 1;
//	b = rand() % 10 + 1;
//	printf("数値a：%d\n", a);
//	printf("数値b：%d\n", b);
//	if (a > b) {
//		printf("aの方が大きいです");
//	}
//	else if (a < b) {
//		printf("bの方が大きいです");
//	}
//	else{
//		printf("等しいです");
//	}
//}


/// <summary>
/// prob3-15
/// </summary>
//void main() {
//	int n;
//	srand((unsigned)time(NULL));
//	n = rand() % 100 + 1;
//	printf("点数：%d\n\n", n);
//	if (n >= 80)
//	{
//		printf("優");
//	}
//	else if (n >= 70 && n < 80)
//	{
//		printf("良");
//	}
//	else if (n >= 60 && n < 70)
//	{
//		printf("可");
//	}
//	else
//	{
//		printf("不可");
//	}
//}


/// <summary>
/// prob3-16
/// </summary>
//void main() {
//	int n;
//	srand((unsigned)time(NULL));
//	n = rand() % 100 + 1;
//	printf("数値：%d\n", n);
//	if (n % 2 == 0) {
//		printf("2の倍数です\n");
//	}
//	else if (n % 3 == 0) {
//		printf("3の倍数です\n");
//	}
//	else if (n % 2 == 0 && n % 3 == 0) {
//		printf("2と3の公約数です\n");
//	}
//}


/// <summary>
/// prob3-17
/// </summary>
//void main() {
//	int n;
//	srand((unsigned)time(NULL));
//	n = rand() % 100 + 1;
//	printf("数値：%d\n", n);
//	if (n <= 50) {
//		printf("５０以下です\n");
//	}
//	else if (n % 2 == 0) {
//		printf("偶数です\n");
//	}
//	if (n <= 50 && n % 2 == 0) {
//		printf("５０以下の偶数です\n");
//	}
//}


/// <summary>
/// prob3-18
/// </summary>
//void main() {
//	int n;
//	srand((unsigned)time(NULL));
//	n = rand() % 45 - 10;
//	printf("摂氏%d度\n", n);
//	if (n >= 30) {
//		printf("真夏日です。\n");
//	}
//	else if (n >= 25 && n < 30) {
//		printf("夏日です。\n");
//	}
//	else if (n < 0) {
//		printf("真冬日です。\n");
//	}
//}


/// <summary>
/// prob3-19
/// </summary>
//void main() {
//	int n;
//	scanf_s("%d", &n);
//	printf("西暦%d年\n", n);
//	if (n % 4 == 0)
//	{
//		printf("閏年です。\n");
//	}
//	else if(n % 100 == 0) 
//	{
//		printf("閏年ではありません。\n");
//	}
//	else if (n % 400 == 0)
//	{
//		printf("閏年です。\n");
//	}
//	else
//	{
//		printf("閏年ではありません。\n");
//	}
//}


/// <summary>
/// prob4-1
/// </summary>
//void main() {
//	int n, i;
//	srand((unsigned)time(NULL));
//	n = rand() % 10 + 1;
//	printf("数:%d\n", n);
//	for (i = 1; i <= n; i++) {
//		printf("■");
//	}
//}


/// <summary>
/// prob4-2
/// </summary>
//void main() {
//	int n, i = 1;
//	srand((unsigned)time(NULL));
//	n = rand() % 10 + 1;
//	printf("数:%d\n", n);
//	while (i <= n)
//	{
//		printf("■");
//		i++;
//	}
//}


/// <summary>
/// prob4-3
/// </summary>
//void main() {
//	int n, i = 1;
//	srand((unsigned)time(NULL));
//	n = rand() % 10 + 1;
//	printf("数:%d\n", n);
//	do {
//		printf("■");
//		i++;
//	} while (i <= n);
//}


/// <summary>
/// prob4-4
/// </summary>
//void main() {
//	int a = 0;
//	while (a <= 3) {
//		printf("a = %d\n",a);
//		a++;
//	}
//}


/// <summary>
/// prob4-5
/// </summary>
//void main() {
//	for (int a = 0; a <= 3; a++) {
//		printf("a = %d\n",a);
//	}
//}


/// <summary>
/// prob4-6
/// </summary>
//void main() {
//	int a = 3;
//	while (a >= 0)
//	{
//		printf("a = %d\n", a);
//		a--;
//	}
//}


/// <summary>
/// prob4-7
/// </summary>
//void main() {
//	for (int a = 3; a >= 0; a--) {
//		printf("a = %d\n", a);
//	}
//}


/// <summary>
/// prob4-8
/// </summary>
void main() {

}



