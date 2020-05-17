/*
	<입력한 숫자 크기의 높이를 갖는 우직각 삼각형 출력하기>
	높이와 여백을 정하는 숫자 두 개를 입력받은 후에
	이 숫자만큼의 높이와 왼쪽 여백을 갖는 우직각 삼각형을 '*'문자로 출력하라.
	예를들어 10을 입력하면,
	첫줄에는 1개, 2번째 줄에는 2개, 3번째 줄에는 3개,..., 10번째 줄에는 10개를 출력한다.

	변수는 다음과 같이 사용하라.
	int height; // 입력받은 높이
	int blank; // 입력받은 여백 크기
	int i, j; // 반복문 사용을 위한 변수
*/

#include <stdio.h>

int main(){
	int height; // 입력받은 높이
	int blank; // 입력받은 여백 크기
	int i, j; // 반복문 사용을 위한 변수 

	printf("height? ");
	scanf("%d", &height);
	printf("blank? ");
	scanf("%d", &blank);
	
	for(i = 1; i <= height; i++){
		for(j = 1; j <= height + blank - i; j++)
			printf(" ");
		for(j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}

