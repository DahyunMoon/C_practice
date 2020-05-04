/*
	<비만 판정>
	신장(cm단위)과 체중(kg단위)를 입력받은 후, 비만여부를 판정하여 출력하라.
	단, 비만여부는 다음 비만도 수치가 25이상인 경우레 "비만"으로 판단한다.
	비만도수치 = 체중(kg) / (신장(m)의 제곱) 으로 계산한다.
	
	*이 때, 신장은 미터 단위로 환산해야 함을 유의하라.

	변수는 다음과 같이 사용하라.
	int height, weight; // 신장(cm), 체중(kg)
	float bmi; // 비만도 수치
*/

#include <stdio.h>

int main(){
	int height, weight; // 신장(cm), 체중(kg)
	float bmi; // 비만도 수치

	printf("height? ");
	scanf("%d", &height);
	float m_height = 0.01*height;
	printf("weight? ");
	scanf("%d", &weight);

	bmi = weight / (m_height*m_height) ;	

	if(bmi < 25)
		printf("You are not overweight.\n");
	else
		printf("You are overweight.\n");

	return 0;
}
