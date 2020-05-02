/*
	<직사각형 넓이 계산 및 정사각형 판정>

	직사각형의 가로크기와 세로크기를 입력받아
	이 값을 이용하여 직사각형의 넒이를 계산하고
	정사각형인지의 여부를 판정하여 함께 출력하라.

	단, 직사각형의 넓이 = 가로 * 세로 로 계산한다.

	변수는 다음과 같이 사용하라.
	int width, height; // 가로크기, 세로크기
	int area; // 사각형의 넒이
*/

#include <stdio.h>

int main(void) {
	int width, height; // 가로크기, 세로크기
	int area; // 사각형의 넒이

	printf("width? ");
	scanf("%d", &width);
	printf("height? ");
	scanf("%d", &height);

	area = width*height;
	printf("넓이는 %d이고 ", area);

	if(width==height)
		printf("정사각형입니다.\n");
	else
		printf("정사각형이 아닙니다.\n");

	return 0;
}
