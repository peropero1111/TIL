#include <stdio.h>
#include <stdlib.h> 

int main(void) 
{
/*	int n;
	printf("enter int:");
	scanf("%d", &n);
	if(n%2==1){
		printf("홀수\n");
	}		
	else{
		printf("짝수\n");
	}
	switch(n%2){
		case 0:
			printf("switch 짝수\n");
			break;
		case 1:
			printf("switch 홀수\n");
			break;
		default:
			printf("default here\n");
			break;	
	}
	
	int x 
	x = (n%2==0) ? 500 : -500 ; //조건연산자 => 조건 문에 입력된 값이 함수를충촉시키면 앞의값 반환 틀리면 뒤에값 반환 
	printf("%s\n", (n%2==0)?"짝수" : "홀수"); *///조건연산자 출력 => 조건 문이 맞으면 앞의값 반환 틀리면 뒤에값 반환 
	
	int month = 0, days = 0;
        printf("일수를 알고 싶은 달을 입력하시오: ");
        scanf("%d", &month);
        
        //? 조건 연산자 사용 
        days = 31;
        days month==1 ? 31 : days;             //1
        days month==2 ? 28 : days;
        days month==3 ? 31 : days;
        days month==5 ? 31 : days;
        days month==4 ? 30 : days;
        days month==6 ? 30 : days;
        days month==9 ? 30 : days;
        days month==11 ? 30 : days;
        days month==7 ? 31 : days;
        days month==8 ? 31 : days;
        days month==10 ? 31 : days;
        days month==12 ? 31 : days;
        printf("%d월의 일수는 %d입니다.\n", month, days); 
        
        
        days=month==2?28month==4||month==6||month==9||month==11?30:31;        //2
        
        days=31
        days=month==2?28:days;
        days=month==4||month==6||month==9||month==11?30:days;       //3
        
        
        
		//if else code 
	/*	if(month==12 || month==10 || month==8 || month==7 || month==5 || month==3 || month==1 ){
			printf("%d월의 일수는 31일입니다", month);
		}
		if(month==2){
			printf("2월의 일수는 28일입니다"); // 예외처리  
		} 
		if(month==4 || month==6 || month==9 || month==11 ){
			printf("%d월의 일수는 30일입니다", month);
		}  */
		
		
		
		
	/*	printf("%d월의 일수는 %d입니다.\n", month, days); 
    switch (month)
    {
        case 2:
            days = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
    }
    printf("%d월의 일수는 %d입니다.\n", month, days); */
    
    
    
	return 0;
}
