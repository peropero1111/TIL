
#include <stdio.h>
#include <stdlib.h>

void print_address( char*p, char*q );

void print_inta(int*p, int*q);

float scanf_3floats(float*p, float*q, float*r){ //void 들어가도 됨  
	//a = &f1, b = &f2, c = &f3
	 
	scanf("%f %f %f", p,q,r); //p,q,r 대신 &*p, &*q, &*r 로 해도 됨 (&=> 위치, *=> 메모리주소 / 서로 반대의 의미 임으로) 
	
	
}


void prinft_backward(int*p, int*q){	//p= ia+4, q=ia
	int* ptr;
	for (ptr = p; ptr >q; ptr--) {
		printf("%d ", *ptr);
	}
	printf("\n");
}


int sum(int*p, int size){	//p=>&ia[1], size=3
	int total=0;
	int i;
	for(i=0; i<size; i++){
		total += p[i];  	//p[0]는 *p는  &ia[1]
							//p[1]는 p[0+1]는 ia[1+1]
							//p[2]는 p[0+2]는 ia[1+2] 
	}
	

	
	return total;
}

int main(void)
{
	float f1,f2,f3;
	scanf_3floats(&f1,&f2,&f3);
	
	printf("%f %f %f\n", f1, f2, f3);
	
	char ca[20]="XYZabcd"; // ca 0  의 메몰 주소
	int ia[10]={4,5,6,7,8,9,};
//	print_address(ia, ia+3);// error 발생 	print_address는 char  메모리 이기떄문
	print_inta(ia, ia+3);		
	print_address(ca, ca + 3);




	prinft_backward( ia+4, ia); 
	
	printf("%d\n", sum(&ia[1], 3));	//답이 5+6+7 

	return 0;
}

void print_address( char*p, char*q ) {
	char* ptr;
	for (ptr = p; ptr < q; ptr++) {
		printf("%u %c", ptr, *ptr);
	}
	printf("\n");

}

void print_inta(int*p, int*q) {
	int* ptr;
	for (ptr = p; ptr < q; ptr++) {
		printf("%u %d,", ptr, *ptr); // "+" 연산자가 char 과 int 연산자 사이에 더하는 값이 달라서 (바이트 수)숫자가 다름 
	}
	printf("\n");

}


