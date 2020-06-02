/*
	<비만 판정>
	10명의 신장(cm)과 체중(kg)을 입력받은 후,
	이들 중 몇 번째 사람들이 비만인지를 판정하여 출력하라.
	그리도 도합 몇명이 비만인지 출력하라.
	단, 비만여부는 다음 비만도 수치가 25 이상인 경우에 "비만"으로 판단한다.
	비만도 수치 = 체중(kg)/(신장(m)의 제곱)으로 계산한다.
	이 때, 신장은 미터 단위로 환산해야 함을 유의하라.

	변수는 다음과 같이 사용하라.
	int height[10], weight[10]; // 10명의 신장(cm), 체중(kg)
	float bmi[10]; // 10명의 비만도 수치
	int count; // 비만인 사람의 숫자
	int i; // 반복문을 위한 변수
*/

#include <stdio.h>

int main(){
	int height[10], weight[10]; // 10명의 신장(cm), 체중(kg)
	float bmi[10]; // 10명의 비만도 수치
	int count = 0; // 비만인 사람의 숫자
	int i; // 반복문을 위한 변수

	for(i = 0; i < 10; i++){
		printf("%d번째 사람의 신장과 체중? ", i + 1);
		scanf("%d %d", &height[i], &weight[i]);
		bmi[i] = weight[i]/((height[i]*0.01)*(height[i]*0.01));
	}

	for(i = 0; i < 10; i++){
		if(bmi[i] >= 25){
			printf("%d번째 사람은 비만\n", i + 1);
			count++;
		}
	}
	
	printf("총 %d명의 사람이 비만\n", count);

	return 0;
}
