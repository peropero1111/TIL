#include <stdio.h>
#include <stdlib.h>
/*
3 5
00000 첫줄& 마지막 줄은 무조건0 
0***0
00000
*/
//int main(void) 

/*	int n=0, i=0, j=0, m=0;
	printf("enter n: ");
	scanf("%d %d",&n, &m);
	
	for(i=0; i<n ; i++){
		//printf("%d\n", i);
		for( j=0; j<m; j++){
		if(i==0){
			printf("0");
		}
		else{
			printf("*");
		}
	}
		printf("\n");
		return 0;
}
	*/
	
	
/*
XX/  (i==0&&j==큼) 
X/X	
/XX (i==큼&&j==0) 
*/
	
	
	
	
int main(void)
{
	 
	//nxn box 만들기
	int n, m, i, j;
	
	printf("enter n: ");
	scanf("%d %d",&n, &m);
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if(j + i ==n-1){
			printf("/");
		}
		else{
			printf("X");
		}
		}
		printf("\n");
	} 
}		


