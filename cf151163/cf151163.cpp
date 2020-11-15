#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int x, y;
int* p1 = &x;
int* p2 = &y;
void num() {
	printf("input num1 num2 : ");
	scanf("%d %d", &x, &y);
	printf("&num1 = %d\n&num2 = %d", &p1, &p2);
}

int main() {
	num();
	int a = *p1 + *p2;
	printf("\n\n&num1+&num2 = %p = %d \n\n", &a, a);
	for (int b = 1; b <= a; b++) {
		for (int c = 1; c < b; c++) {
			printf("0 ");
		}
		printf("%d\n", b);
	}

	return 0;
	 
}