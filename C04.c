/*
	<점수 계산>
	국어, 영어, 수학 점수를 입력받아 
	이 점수의 총점과 평균을 계산하여 출력하라.
	단, 총점 = 국어점수 + 영어점수 + 수학점수,
	평균 = 총점 / 3.0 으로 계산하라. 

	변수는 다음과 같이 사용하라.
	int kor, eng, math; // 국어점수, 영어점수, 수학점수
	int total; // 총점
	float average; // 평균점수
*/

#include <stdio.h>

int main(void) {
	int kor, eng, math; // 국어점수, 영어점수, 수학점수
	int total; // 총점
	float average; // 평균점수

	printf("Kor?");
	scanf("%d", &kor);

	printf("Eng?");
	scanf("%d", &eng);

	printf("Math?");
	scanf("%d", &math);

	total = kor+eng+math; // 총점 계산
	average = total/3.0; // 평균 계산

	printf("total is %d\n", total);
	printf("average is %.1f\n", average); // 소숫점 한 자리까지 출력

	return 0;
}
