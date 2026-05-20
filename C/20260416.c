#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#define SIZE 10
#define ROWS 3
#define COLS 3


int main(void)
{


    //int s[10];	 // 1차원 배열
    //int s[3][10]; 	// 2차원 배열
    //int s[5][3][10]; 	// 3차원 배열



    /*
    int s[3][5] = {
  {  0,  1,  2,  3,  4 }, // 첫 번째 행의 원소들의 초기값 
  { 10, 11, 12, 13, 14 }, // 두 번째 행의 원소들의 초기값 
  { 20, 21, 22, 23, 24 } // 세 번째 행의 원소들의 초기값 
    };
    */



    /*
        int list[SIZE] = { 100, 30, 20, 78, 89, 12, 56, 38, 99, 66 };

        for (int k = 0; k < SIZE; k++) {
            system("cls");        // 화면을 지운다. 
            for (int i = 0; i < SIZE - 1; i++) {    // 버블 정렬
                if (list[i] > list[i + 1]) {
                    int tmp = list[i]; list[i] = list[i + 1]; list[i + 1] = tmp;
                }
            }
            for (int i = 0; i < SIZE; i++) {
                for (int m = 0; m < list[i] / 10; m++) // 세로로 막대를 그린다. 
                    printf("*");
                printf("\n");
            }
            _getch();    // 사용자로부터 하나의 문자를 받을 때까지 기다린다. 
        }
   */


    /*
    int i, j;
    // 3행과 5열을 가지는 2차원 배열 선언
    int a[3][5] = { { 0, 1, 2, 3, 4 }, { 0, 1, 2, 3, 4 }, { 0, 1, 2, 3, 4 } };

    // 각 배열 요소의 값을 출력한다. 
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("a[%d][%d] = %d ", i, j, a[i][j]);
        }
        printf("\n");
*/


    int r, c;

    int A[ROWS][COLS] = { { 1,0,0 }, { 0,1,0 }, { 0,0,1 } };
    int B[ROWS][COLS] = { { 1,0,0 }, { 0,1,0 }, { 0,0,1 } };
    int C[ROWS][COLS];

    // 두개의 행렬을 더한다.
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            C[r][c] = A[r][c] + B[r][c];
            printf("%d ", C[r][c]);
        }
        printf("\n");
    }









	return 0;
}