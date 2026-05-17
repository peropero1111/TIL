#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int g_variable = 123456;	//{} 밖에 위치 => 전역변수 => 모든 곳에서 접근가능
// 지역변수와 이름이 같으면 지역변수 먼저

int func1(int a, double b){	//이런 함수가 있다고 알려줌
	//int a; double b; 입력변수 도 함수{}의 지역변수, 함수 호출시 a=i의 값; b=23.75;
	int r;
	r = a + b;
	a = 999;
	printf("g_variable in func1 %d\n", g_variable);
	return r;	//r값이 반환됨, r변수는 소멸
}	//a, b, r 모두 소멸	

float func2(int a) {
	g_variable += 1;	//얘는 전역변수라서 호출을 무한히 계속해도 계속늘어남
	int local = 0;	//얘는 func2 {}안의 지역변수 라서 호출때마다 다시 생성됨 
	//static  움직이지 않는
	static int st_v = 0;	//선언및 초기값은 1번만 실행, 소멸 되지 않음 (like global 변수)
	local += 1;
	st_v += 1;
	printf("global %d, local %d, static %d \n", g_variable, local, st_v);
	return 96.7;
}

int sum(int n) {
	if (n==1) {
		return 1;
	}
	else {
		return n + sum(n - 1);
	}
}

int main(void)
{ 
	printf("sum(5)=%d\n", sum(5));
	//지역변수 {} 지역에서 접근가능

	int k = 0;
	int i = 77;
	if (k == 0) {
		float ifk = 8;
		int k = 99;
		printf("What is k? %d\n", k);	//같은 범위의 {} 에 선언된 변수만 접근가능
		printf("main {} i is %d\n", i);
		printf("value of i is unhcanged %d\n", i);
		printf("--------------------------------static 변수-------------------------------------\n");
		g_variable = 0;
		func2(i);	
		func2(i);		
		//st_v = 8;	 static 변수는  전역변수와 달리 어디에서나 접근불가 
		func2(i);	
		
	}//k 와 ifk 변수는 소멸

	//ifk==99; {} 나가면 접근불가
	//int k = 44; 같은 {] 안 에서 같은이름의 변수 선언금지 (if의 k != int main 의 k) 
	printf("What is k outside? %d\n", k);

	k = func1(i, 23.75);
	printf("new k is %d\n", k);







	return 0;
}