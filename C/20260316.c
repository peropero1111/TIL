#include <stdio.h>

int main() 
{
	int i=78;
	
	printf("%d %i %x %X %o\n", i, i, i, i, i);
	printf("%d bytes\n", sizeof(i)); //리눅스에선(oj 에선) unsinged 로 고쳐야 함
	
	double d=3.1345e3; //3.12345X10^3
	
	printf("%lf %e %E\n", d, d ,d);
	
	d = 9.876543;
	printf("%lf %.1lf %.2lf %.4lf\n", d, d, d, d); // 출력은 반올림O 
	
	i = d;
	printf("i is %d\n", i); //%i 로출력시 대부분 오류가 뜸 %d로 바꿔야 함 (oj 시스템에서 작동 x) 
	printf("%d wrong format\n", d); //%d 로 출력시 경고가 뜸 (oj 시스템에서 작동 x) 
	
	char c = 'A';
	//c = "A";  "A" ={'A', '\0'} 문자열 이기 때문에 오류가 뜸 
	printf("char %c %d\n", c, c);
	printf("Dont forget to compile\n");
	
	printf("%u %u\n", sizeof(c), sizeof(char));
	printf("%c %c %c %c\n ", c, c+1, c+3, c+3);
	printf("%c %d", '8', '8');
	
	return 0;
}
