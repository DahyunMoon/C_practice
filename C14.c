/*
	<3개의 수 중 최댓값과 최솟값 구하기>
	숫자를 3개 입력받은 후, 
	이 숫자 중에서 가장 큰 수, 가장 작은 수를 출력하라.

	변수는 다음과 같이 사용하라.
	int num1, num2, num3; // 첫 번째 숫자, 두 번째 숫자, 세 번째 숫자
	int max_num, min_num; // 가장 큰 숫자, 가장 작은 숫자
*/

#include <stdio.h>

int main(){
	int num1, num2, num3; // 첫 번째 숫자, 두 번째 숫자, 세 번째 숫자
	int max_num, min_num; // 가장 큰 숫자, 가장 작은 숫자

	printf("첫번째 숫자? ");
	scanf("%d", &num1);
	printf("두번째 숫자? ");
	scanf("%d", &num2);
	printf("세번째 숫자? ");
	scanf("%d", &num3);

	max_num = num1;
	min_num = num1;

	if(max_num < num2)
		max_num = num2;
	if(max_num < num3)
		max_num = num3;
	if(min_num > num2)
		min_num = num2;
	if(min_num > num3)
		min_num = num3;

	printf("가장 큰 수는 %d이고, 가장 작은 수는 %d입니다.\n", max_num, min_num);

	return 0;
}
