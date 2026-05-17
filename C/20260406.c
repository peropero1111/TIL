#include <stdio.h>
#include <stdlib.h> 


//while 문 만사용하여 구현 
int main(void) 
{
	int n, i;



while (1 < n && n < 8){  //첫번째 거
	printf("Enter 1 < n <8: ");
	scanf("%d", &n);	
	n++;
}	  
/*	do{
		printf("Enter 1 < n <8: ");
		scanf("%d", &n);
	}while(	!(1 < n && n < 8) ); */

	
	for(i = 0; i<n; i++) { //초기식, 조건식,증감식 
		int j;
		for(j=0; j<n; j++){
			printf("(%d %d)", i,j);
		} 
		printf("\n"); 
	}

int j;
	
while (i<n){
	while (j<n){
		printf("(%d %d)", i,j);	
		j++;
	}
	printf("\n");	
	i++;	
}

	
	return 0;
}

