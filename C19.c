/*
		<2차 함수의 좌표 구하기>
		2차함수 y = ax2 + bx + c 에 대해 계수 a와 b와 c를 입력받은 후,
		x값의 시작 값과 마지막 값을 입력받아 이 두 수 사이의 x값에 대한
		2차함수의 (x, y) 좌표들을 출력하라.

		반복문은 for문을 사용하고, 변수는 다음과 같이 사용하라.
		int a, b, c; // 2차 함수의 계수 a, b, c
		int x_begin, x_end; // x좌표의 시작 값과 끝 값
		int x, y // x좌표, y좌표
*/

#include <stdio.h>

int main(){
	int a, b, c; // 2차 함수의 계수 a, b, c
	int x_begin, x_end; // x좌표의 시작 값과 끝 값
	int x, y; // x좌표, y좌표

	printf("2차 함수의 계수 a와 b와 c를 입력: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("x좌표의 시작 값과 끝 값을 입력: ");
	scanf("%d %d", &x_begin, &x_end);

	for(x = x_begin; x <=  x_end; x++){
		y = a*x*x + b*x + c;
		printf("좌표 (%d, %d)\n", x, y);
	}

	return 0;
}

