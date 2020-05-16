/*
	<두 수의 배타적 배수 출력하기>
	숫자 2개를 입력받은 후, 1부터 100까지의 숫자 중에 
	이 두 숫자 중 하나의 숫자에 대해서만 배수인 수를 모두 출력하라.
	즉, 두 숫자의 공통 배수인 숫자는 출력하지 않아야 한다.
	예를 들어 15와 20을 입력하게 되면 "15, 20, 30, 40, 45, 75, 80, 90, 100"이 출력된다.

	반복문은 for 구문을 사용하고, 변수는 다음과 같이 사용하라.
	int num1, num2; // 입력받은 두 수
	int i; // 반복문을 위한 변수
*/

#include <stdio.h>

int main(){
	int num1, num2; // 입력받은 두 수
	int i// 반복문을 위한 변수
	int cal1[] = (int*)malloc(sizeof(int));
	int cal2[] = (int*)malloc(sizeof(int));
	int final[] = (int*)malloc(sizeof(int));
	int count1 = 0; 
	int count2 = 0;

	printf("2개의 숫자를 입력: ");
	scanf("%d %d", &num1, &num2);

	for(i = 0; num1 < 100; i++){
		cal1[i] = num1;
		count1++;
		num1 = num1*(i+2);
	}
	for(i = 0; num2 < 100; i++){
		cal2[i] = num2;
		count2++;
		num2 = num2*(i+2);
	}
	
	int size = count1 + count2;

	for(i = 0; count1!=0 && count2!=0; i++){
	//int array 비교 후 작은거 먼저 final array에 넣어주기
	}

	for(i = 0; i < size; i++)
		printf("%d\n", final[i]);

	return 0;
}
	
