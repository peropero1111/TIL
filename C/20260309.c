#include <stdio.h>
// 코딩에 포함 안됨.
int main(){ //시작 함수/과로와
 // {} 안에 들어가면 tab 추가

	printf("Hello World!\n");//1(main)
    {
		printf("inside 2 {}, 2 tabs\n");//2({)
    }

    printf("A");//1(main)
    {
        printf("B");//2({)
        {
            printf("c");//3({{) => ( { 로 부터 tab 두 번(8번째 줄 참고))
        }
    }
    printf("d");//1(main)
    {
		printf("k");//2({)
    }
	printf("s");//1(main)
    {
		printf("t");//2({)
    }

	return 0;//1(main)
}