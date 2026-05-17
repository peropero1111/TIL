#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

int main(void) 
{
	//41 67 34 0

	//float a = 0, b = 0, d = 0;

	float fa[SIZE] = { 0 };
	int i;
	for (i = 0; i < SIZE; i++) fa[i] = rand() % 100;//(void)scanf("%f", &fa[i]);
	for (i = 0; i < SIZE; i++) printf("%0.2f ", fa[i]);
	printf("\n");

	
	//뒤에서부터 출력
	for (i = 0; i < SIZE; i++) printf("%0.2f ", fa[SIZE - i - 1]);
	printf("\n");
	
	//짝수만 출력 
	for (i = 0; i < SIZE; i++)
		if ((int)fa[i] % 2 == 0) printf("even number\n");
		
	//짝수의 합계산
	float sum;
	sum = 0;

	for (i = 0; i < SIZE; i++)
		if ((int)fa[i] % 2 == 0) sum += fa[i];
	printf("sum %0.2f\n", sum);
	

	//int 배열에 fa 값 대입
	int ia[SIZE];
	//ia = fa 배열 대입 오류 
	
	for (i = 0; i < SIZE; i++) ia[i] = (int)fa[i];
	for (i = 0; i < SIZE; i++) printf("%d ", ia[i]);
	printf("\n");
	
	//뒤에서부터 출력416734 => 437614
	int x = 0, y = 0, z = 0;//각각 0, 1, 2 +a 
	

	//printf("%d", ia[i]);  
	
	x = 416743;

	while (x > 0) {
		
		y = x % 10;
		z = z * 10 + y;
		x = x / 10;
		
		
		
		
		/*
		x = 34 - 34 % 10;
		y = 34 % 10;
		x = x / 10;
		*/
		
	}

	printf("%d", z);
	
	return 0;
}