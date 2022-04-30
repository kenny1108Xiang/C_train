#include <stdio.h>
/*
	這一檔案是在練習C語言
*/
int main(void) {
	int sum, num1, num2;
	num1 = 50;
	num2 = 100;
	sum = num1 + num2;
	printf("%i + %i = %d",num1, num2, sum); //格式化輸出數字有 %i、%d
	return 0;
}