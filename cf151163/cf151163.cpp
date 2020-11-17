#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int x[4];
int* p1 = &x[1];
int* p2 = &x[2];
void num() {
	printf("input num1 num2 : ");
	scanf("%d %d", &x[1], &x[2]);
	printf("&num1 = %d\n&num2 = %d", &p1, &p2);
}

int main() {
	num();
	int a = *p1 + *p2;
	printf("\n\n&num1+&num2 = %p = %d \n\n", &a, a);
	for (x[3] = 1; x[3] <= a; x[3]++) {
		for (x[4] = 1; x[4] < x[3]; x[4]++) {
			printf("0 ");
		}
		printf("%d\n", x[4]);
	}

	return 0;
	 
}