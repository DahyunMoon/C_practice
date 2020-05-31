/*
	<5명의 국, 영, 수 3과목 점수의 학생 별 총점, 평균값 구하기>
	학생 5명의 국어, 영어, 수학 점수를 각각 입력받아 저장한 후에,
	각 학별 총점과 평균 점수를 계산하여 출력하라.

	변수는 다음과 같이 사용하라.
	int jumsu[5][3]; // 5명의 3과목 점수를 저장하고 있는 2차원 배열
	int sum[5]; // 학생별 총점
	float average[5]; // 학생별 평균
	int i, j;  // 반복문을 위한 변수
*/

#include <stdio.h>

int main(){
	int jumsu[5][3]; // 5명의 3과목 점수를 저장하고 있는 2차원 배열
	int sum[5]; // 학생별 총점
	float average[5]; // 학생별 평균
	int i, j;  // 반복문을 위한 변수

	for(i = 0; i < 5; i++){
		printf("%d번 학생 국어, 영어, 수학 점수? ", i + 1);
		for(j = 0; j < 3; j++){
			scanf("%d", &jumsu[i][j]);
			sum[i] += jumsu[i][j];
		}
		average[i] = sum[i]/3;
	}
	
	for(i = 0; i < 5; i++)
		printf("%d번 학생의 총점은 %d, 평균은 %.1f\n", i + 1, sum[i], average[i]);
	
	return 0;
}
