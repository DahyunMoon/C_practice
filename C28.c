/*
	<심사점수 계산>
	심사점수를 10개 입력받아 배열에 저장한 후, 
	이 중에서 가장 큰 점수와 가장 작은 점수를 제외한 8개의 점수에 대한 평균을 출력하라.

	변수는 다음과 같이 사용하라.
	float score[10]; // 심사점수
	float max, min; // 가장 큰 점수, 가장 작은 점수
	float total; // 점수 총 합계
	float average; // 평균 점수
	int i; // 반복문을 위한 변수
*/

#include <stdio.h>

int main(){
	float score[10]; // 심사점수
	float max, min; // 가장 큰 점수, 가장 작은 점수
	float total; // 점수 총 합계
	float average; // 평균 점수
	int i; // 반복문을 위한 변수

	for(i = 0; i < 10; i++){
		printf("%d번 심사점수? ", i + 1);
		scanf("%f", &score[i]);
	}

	max = score[0];
	min = score[0];
	for(i = 0; i < 10; i++){
		total += score[i];
		if(max < score[i])
			max = score[i];
		if(min > score[i])
			min = score[i];
	}

	total = total - (max + min);
	average = total/8;

	printf("가장 큰 점수와 가장 작은 점수를 제외한 8개의 점수의 평균은 %.1f입니다.\n", average);
	return 0;
}
