/*
	<소득세 계산>
	연봉(원 단위)을 숫자로 입력받은 후,
	연봉 금액에 대한 소득세를 계산하여 출력하라.
	
	단, 소득세의 금액을 다음과 같이 계산한다.
	연봉 1천만원 미만: 연봉의 9.5%
	연봉 1천만원 이상~ 4천만원 미만: 연봉의 19%
	연봉 4천만원 이상~ 8천만원 미만: 연봉의 28%
	연봉 8전만원 이상: 연봉의 37%

	변수는 다음과 같이 사용하라.
	int income; // 연봉(원 단위)
	int tax; // 소득세(원 단위)
*/

#include <stdio.h>

int main(){
	int income; // 연봉(원 단위)
	int tax; // 소득세(원 단위)

	printf("income? ");
	scanf("%d", &income);

	if(income < 10000000)	tax = income*0.095;
	else if(income < 40000000)	tax = income*0.19;
	else if(income < 80000000)	tax = income*0.28;
	else tax = income*0.37;

	printf("tax is %d.\n", tax);

	return 0;
}
