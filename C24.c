/*
	<홀수단 또는 짝수단의 구구단 출력>
	출력모드(홀수 또는 짝수)를 입력받아 이에 따라 홀수 단 또는 짝수 단의 구구단 만을
	1줄에 3개씩 출력하라.
	단, 출력보드 입력 내용이 1이면 홀수단, 2이면 짝수단으로 결정하도록 한다.

	변수는 다음과 같이 사용하라.
	int mode; // 출력모드(1: 홀수단, 2: 짝수단)
	int i, j; // 반복문 사용을 위한 변수
*/

#include <stdio.h>

int main(){
	int mode; // 출력모드(1: 홀수단, 2: 짝수단)
	int i, j; // 반복문 사용을 위한 변수

	printf("구구단의 출력모드(1: 홀수단, 2: 짝수단)를 입력하세요: ");
	scanf("%d", &mode);

	if(mode == 1){
		for(i = 3; i < 10; i += 2){
			for(j = 1; j < 10; j++){
				printf("%d X %d = %d ", i, j, i*j);
				if(j%3 == 0)
					printf("\n");
			}
			printf("\n");
		}
	}
	else if(mode == 2){
		for(i = 2; i < 10; i+= 2){
			for(j = 1; j < 10; j++){
				printf("%d X %d = %d ", i, j, i*j);
				if(j%3 == 0)
					printf("\n");
			}
			printf("\n");
		}
	}
	else
		printf("잘못입력하셨습니다.\n");

	return 0;
}
