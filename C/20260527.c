#include <stdio.h>
#include <stdlib.h>



//int sum (char a, double b)
//{
//	printf("%c",a);
//	return 0;
//}



//typedef struct
//{
//	char name[32];
//	int id;
//	float grade;
//}student;





//void squared(int* ptr)
//{
//	*ptr *=*ptr;
//}
//
//void squared(int, ptr)
//{
//	ptr *=ptr;
//}


//
//void a ()
//{
//	
//	
////}


//void scan_student(student* p) //p=&a 그러면 a는 ? *&a is a 즉 *p is a 
//{
//	scanf("%s",(*p).name);
//	scanf("%d",&(*p).id);
//	scanf("%f",&(*p).grade);
 
//	or 포인터의 메모리 주소(포이ㅣㄴ터)에서 멤버 변수 접근 연산자 ->
//	구조체 변수에서 멤버 변수 접근 연산자 .
	
//	scanf("%s",p->name);
//	scanf("%d",&p->id);
//	scanf("%f",&p->grade); 
//
//}







/*int main()
{
	student a,b;
	student*ptr;*/ //student 변수의 주소 값을 가질수 있는 포인터 
	
//	scanf("%d",&a); //student 메모리 주소 != 10진수 메모리 주소로 입력 ( 오류 ) 
 
 
 	//scan_student(&a);
 
//	scanf("%s",a.name);
//	scanf("%d",&a.id);
//	scanf("%f",&a.grade); 
//	
//	printf("%s %d %f\n",a.name, a.id, a.grade);
	 
	
//	a.grade;
//	b.grade;
	
	//printf("%d %d",sizeof(char), sizeof(student)); 
	
	
	//문자char, 실수float , double  , 정수 short , int,  long 
	//포인터 모든 데이터 티입및 구조체에는 포인터가 있음.
	//포인터는 변수의 메모리 주솟값을 가지는 변수
 
 
// 	char* cptr; //char 포인터 에는 char 변수의조솟값만 받을 수 있음 
// 	char c='9';
//	cptr = &c; 
// 	printf("%u %c\n",cptr,*cptr);
 	
// 	int i=88;
//	squared( &i);
//	printf("%d\n",i);  
// 	
// 	int i=88;
//	squared( i);
//	printf("%d\n",i);  
 	
 	
 	
//	double k=8.88;
//	sum(k,'5');	
	
		
	
	
	
	
//	return 0;
//}
