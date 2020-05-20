/*
	<입력한 숫자 크기의 높이를 갖는 이등변 삼각형 출력하기>
	숫자를 하나 입력받은 후에 이 숫자만큼의 높이를 갖는 이등변삼각형을
	'*' 문자로 화면에 출력하라.
	예를 들어 10을 입력하면 첫 줄에는 1개, 2번째 줄에는 3개, 3번째 줄에는 5개,...,
	10번째 줄에는 19개의 '*'을 가운데 정렬한 모습으로 출력하는 것이다.

	변수는 다음과 같이 사용하라.
	int height; // 입력받은 높이
	int i, j; // 반복문 사용을 위한 변수
*/

#include <stdio.h>

int main(){
	int height; // 입력받은 높이
	int i, j; // 반복문 사용을 위한 변수

	printf("height? ");
	scanf("%d", &height);

	for(i = 1; i <= height; i++){
		for(j = height - i; j > 0 ; j--)
			printf(" ");
		for(j = 1; j < i*2; j++)
			printf("*");
		for(j = height - i; j > 0 ; j--)
			printf(" ");
		printf("\n");
	}

	return 0;
}
			
