/*
	<물의 온도 구간 판정>
	물의 온도를 입력받은 후, 
	이 물이 어느 정도의 온수인지 판정하여 그 결과를 출력하라.
	단, 온수의 판정 구간은 다음과 같다.
	
	--------------------------------
	음수값(0미만): 잘못입력
	0도 이상~ 25도 미만: 냉수
	25도 이상~ 40도 미만: 미온수
	40도 이상~ 80도 미만: 온수
	80도 이상: 끓는 물
	--------------------------------

	변수는 다음과 같이 사용하라.
	float input_degree; // 입력받은 온도
*/
#include <stdio.h>

int main(){
	float input_degree; // 입력받은 온도

	printf("degree? ");
	scanf("%f", &input_degree);

	if(input_degree < 0)
		printf("잘못입력하셨습니다.\n");
	else if(input_degree < 25)
		printf("냉수입니다.\n");
	else if(input_degree < 40)
		printf("미온수입니다.\n");
	else if(input_degree < 80)
		printf("온수입니다.\n");
	else
		printf("끓는물입니다.\n");

	return 0;
}
