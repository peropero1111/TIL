#define _CRT_SECURE_NO_WARININGS
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	srand(time(NULL));

	int x, y, z;
	int mid;
	int largest;
	int smallest;
/*	int b=0;// 가장 큰 수 (임시) */
	
	x = rand()%100; 
	y = rand()%100;
	z = rand()%100;  
	
	printf("%d %d %d\n", x, y, z);
	
 

	//작은수 부터 큰수까지 정렬해서 출력 
	
    /*b = x;*/
//==================================================================================
	
	
	smallest = x;
	
	if( smallest > y) smallest=y;
	if( smallest > z) smallest=z;
	
	printf("가장 작은 수는 %d\n ", smallest); 
	
//==============================================================================

	int middle; //중간 값 츨력 	
	/*middle = y;
	
	if( middle == x) middle=x;
	if( middle == z) middle=z;
	
	printf("중간값은 %d\n ", middle);*/
	
	
	/*if( x >= y)&&( y >= z ) printf("중간값은%d 입니다\n ",y);
	
	if( x >= z)&&( z >= y ) printf("중간값은%d 입니다\n ",z);
	
	if( y >= )*/
	
	
	if( largest>x && x>smallest) mid=x; 
	if( largest>y && y>smallest) mid=y;
	if( largest>z && z>smallest) mid=z;
	printf("중간값은%d 입니다.\n", mid);
//=================================================================================	

	printf("%d %d %d\n", smallest, mid, largest);
	int k = rand()%100;
	//x, y,z,k 를 정렬해서 출력 
		
	
	
	
	if( k<=smallest)
		printf("%d %d %d %d\n", k, smallest, mid, largest);	
	else if(k<=mid)
		printf("%d %d %d %d\n", smallest, k, mid, largest); 
	else if(k<=largest)
		printf("%d %d %d %d\n", smallest, mid, k, largest);	
	else 
		printf("%d %d %d %d\n", smallest, mid, largest, k);	
//======================================================================================


 //제일 작은값 출력
		
//=========================================================================================== 
	return 0;
}
