#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int mystrlen(char*p){
	//문자열은 '\0' 이 나오면 끝
	int i=0;
	for (i=0; p[i]!='\0'; i++){
	} 
	return i;
}

void mystrcpy(char*a, char*b){	//b  의값 a에 복사 , b가 ar[0]의 주소 값 
	 /*char ar3[10];
	 a= ar3;
	 char ar3= b;*/
	// a[0]= b[0];	// ar2[0] = ar1[0]
	int i; 
	for(i=0;b[i]!='\0'; i++)
		a[i]=b[i];	//ar2[i]=ar1[i]
	a[i]='\0';	 	//문자열은 항상 '\0'로 끝나야 함.	
} 
	 	
char *mystrcat(char *p, char *q)
{
    int i, j;

    for (i = 0; p[i] != '\0'; i++);

    for (j = 0; q[j] != '\0'; j++) {
        p[i + j] = q[j];
    }

    p[i + j] = '\0';

    return p;
}
 

int main(void) 
{
	char a1=8;
	char a= '8';
	char ar1[10]= "8"; //{ 'A' , ' \0'}
	char ar2[10]={'8','\0','9','0','\0'};	//8뒤에 '\0' 이 있으니 문자열이 끝남 
	printf("%s %s %s\n", ar1, ar2, &ar2[2]);
	
	scanf("%[^\n]s", ar1);	//[^\n] not \n <==  중요! 
	//scanf("%s", ar1);	//ar1은 ar1[0]의 메모리주소임 (걍 문자열이라고 외우는게 편함) 
	
	//printf("%s", ar1);
	
	
	
	printf("string length is %d\n", mystrlen(ar1));
	mystrcpy(ar2, ar1); //ar1을 ar2 에복사 
	printf("%s\n", ar2);
	
	mystrcat(ar1, ar2);	//ar1에 ar2를  붙임, ar1이 "Hello" ar2도 "Hello" 면 "HelloHello" 가 됨 
	 
	//대문자로만출력, 특수문자는 *로 출력
	int i=0;
	
	for(i=0; ar1[i]!='\0'; i++){
		if(ar1[i]>'A'&&ar1[i]<='z'){	//영문인지 확인 하는 법 (대문자 A와 소문자 z 사이)
			if(ar1[i]>='A'&& ar1[i<='z']){
				printf("%c", ar1[i]);
		
		
		} 
		else{
			printf("*");
		} 
	}	
}
	return 0;
}
