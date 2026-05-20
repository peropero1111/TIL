#include <stdio.h>
#include <stdlib.h>

//구조체;새로운 데이터 타입
 

 



struct point
{
	int x,y;	//멤버 변수 (struct 구조체의) 
	char c,d,e;	//멤버 변수 (struct 구조체의) 
	
	double f[8]; 
};


void print_point(struct point a, struct point* p)	//이게 맞나? 
{   
		p->c='P';
		printf("(%d,%d)\n", p->x, p->y,p->c);

}
	
	
struct triangle
{
	struct point a,b,c;
};
	
	
struct point scan_point()
{
	struct point v;

	printf("enter x,y:");
	scanf("%d %d", &v.x, &v.y);

	return v;
}


struct grade
{
	//수학 , 영어 , 프로그래밍,평균

	int math, english, programming;

	float avg;



};
	
void scan_grade(struct grade* ptr)
{
	int ma,en,pr;
	
	printf("Enter math, english, programming grades: ");
	
	scanf("%d %d %d",&ma, &en, &pr);
	
	ptr->math=ma;
	
	(*ptr).english=en;
	
	ptr->programming;
	
};





void update_avg(struct grade* ptr)
{
	ptr->avg=(ptr->math+ptr->english+ptr->programming)/3;
	
	
 } 



void print_grade(struct grade v)
{
	printf("%d %d %d %f\n",v.math, v.english, v.programming, v.avg);
	
	
} 



union number
{
	float f;	//같은 메모리 공간 공유 
	int i;		//같은 메모리 공간 공유 
};


enum levels { low = 1, medium, high };	//int 값을 다른 이름으로 사용
//enum days { MON, TUE, WED, THU, FRI, SAT, SUN }; 

typedef int int32;


typedef struct point point;

typedef struct	//다른 방식의 구조체 정의 (typedef 사용) 
{
	float h,w;
	
} rect;

int main(void) 
{
	rect kkk;
	
	 
	point mypt;	//struct point mypt 와 같음 (typedef 에 의하여) 
	
	int32 i;	//int i 와 같음 (typedef 에 의하여) 
	
	enum days future_day;
	enum days today;
	//scanf("%d",&today);
	
	//ptintf("%d %d\n",MON, SUN);
	printf("%d %d %d\n", low, medium. high);	//결과=>1,2,3
	
	//printf("%d %d %d\m", 1,2,3); //이렇게 쓰지 않기 위해 
	
	
	union number n;
	n.f=33.7;	//n.f 나 n.i중 하나만 n의 위치에 있을 수 있음 
	n.i=99;
	 

	
	
	
	struct triangle r;
	r.a.x=3;
	r.b.y=7;
	r.c.c='K';
	
	struct grade kim;
	scan_grade(&kim);	//수학.영어, 프로그래밍점수 입력받는 함수  
	update_avg(&kim);	//평균값 업데이트 함수 
	print_grade(kim);	
	
/*	if(kim.math>medium)
	{
		
	} */
	
	float fv;
	struct point pt1;	//struct point => data type , p1 => 변수 
	
	pt1.x=8;
	pt1.y=99; 
	
	scanf("구조체는 printf scanf 정의가 없음%d %d\n ", pt1.x, pt1.y);
	printf("sizeof(pt1)is %u\n",sizeof(pt1.x));
	
	struct point* ptr;	//구조체도 포인터가 있음
	ptr=&pt1;
	printf("-> operater:%d %d\n",(*ptr).x, ptr->y);
	
	//pt1.x +=7; 
	
	print_point(pt1,&pt1); 
	
	struct point pt2;
	pt2=scan_point(); 
	print_point(pt2,&pt2);
	
	//cpy_point(&pt1, pt2);	//pt2를 pt1에 copy  
	pt1=pt2;//shallow memory copy 기법을 사용하면 됨  //굳이 pt1.x=pt2.x 를 하지 않아도 됨  
	
	
	
	
	
	
	return 0;
}
