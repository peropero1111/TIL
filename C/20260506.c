#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void print(double* p, int size);
void swap(char* a, char* b) {	//a=&x, b=&y	(x,y 값어치가 바뀜)
	char temp;
	temp = *a;	//*a는 *&x 즉 x
	*a = *b;	//x=y;와 같음
	*b = temp;	//y에 temp 대입
}	//a,b는 소멸


void swap_value(char a, char b) {	//a=x즉 a'K' , b=y즉 b='P'	(x,y 값어치는 바뀌지 x)
	char temp;
	temp=a;	//temp='K'
	a = b;	//a='P'
	b = temp;	//b='L'

}	//a,b는 소멸


double mymax(char* a, int* b, float* c) {
	
	return (double*)b;
}

float mymin(char d, int e, float* f) {	//솔직히 &float 가 맞는 지 모르겠음
	
	return (float*)e;
}





int main(void)
{
	char m = 'A';
	int n = 78;
	float r = 36.7;
	double* ptr;
	ptr = max(&m, &n, &r);	//&x => x* , x => x

	printf("%f\n", mymin(m, n, &r));	//&x => x* , x => x

	char x = 'K', y = 'P';
	swap_value(x, y);
	printf("%c %c\n", x, y);
	swap(&x, &y);
	printf("%c %c\n", x, y);
	

	printf("==================================================\n");
	double d[5] = { 2,5,6,4,9 };
	printf(d,5);	//d는 &d[0]
	//printf(d + 1, 4);	//d+1 dms &d[1]
	printf("\n");




	float f = 35.6f;

	int i = 77;
	int* p = NULL;	//int* 는 int 메모리 주소 값을 가질수 있는 데이터 타입 =>12
	//int** pp;
	printf("initial p value: %u\n", p);
	p = &i;
	//p = (int*)&f;//float메모리 주소는 float  포인터에
	printf("i의 메모리 주소 %u %u %u\n", &i, p, &p);

	printf("i value: %d %d %d\n", i, *&i, *p);










	return 0;
}

void print(double* p, int size) {
	int i;
	printf("[");
	for (i = 0; i < size; i++) printf("%.1lf", p[i]);
	printf("]\n");

	printf("[");
	for (i = 0; i < size; i++) printf("%u %.1lf", p + i, *(p + 1));
	printf("]\n");



}