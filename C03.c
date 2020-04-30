/*
	<아파트 평형 계산>
	아파트의 분양 면적을 제곱미터(m^2)단위로 입력받아
	이 값을 평형 단위의 값으로 변환하여 출력하라.
	단, 평형 수 = 제곱미터 / 3.305 로 계산한다.

	변수는 다음과 같이 사용하라.
	float m2_area; // 면적(제곱미터)
	float pyung_area; // 면적(평수)

*/

#include <stdio.h>

int main(void){
	float m2_area; // 면적 (제곱미터)
	float pyung_area; // 면적 (평수)

	printf("m2_area? ");
	scanf("%f", &m2_area);

	pyung_area = m2_area / 3.305; // 평형 단위로 변환
	printf("pyung_area is %.1f\n", pyung_area); // 소숫점 한 자리까지 출력

	return 0;
}
