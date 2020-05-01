/*
	<파일 용량 계산>
	파일 용량을 기가바이트 단위로 입력받아 이 값을
	메가바이트, 킬로바이트, 바이트 단위로 계산하여 각각 출력하라.

	단, 계산방법은 다음과 같다.
	메가바이트 수 = 기가바이트 수*1024
	킬로바이트 수 = 메가바이트 수*1024
	바이트 수 = 킬로바이트 수*1024

	변수는 다음과 같이 사용하라.
	int gigabytes; // 용량(기가바이트 단위)
	int megabytes; // 용량(메가바이트 단위)
	int kilobytes; // 용량(킬로바이트 단위)
	unsigned int bytes; // 용량(바이트 단위)
*/

#include <stdio.h>

int main(void){
	int gigabytes; // 용량(기가바이트 단위)
	int megabytes; // 용량(메가바이트 단위)
	int kilobytes; // 용량(킬로바이트 단위)
	unsigned int bytes; // 용량(바이트 단위)

	printf("File capacity in gigabytes? ");
	scanf("%d", &gigabytes);

	megabytes = gigabytes*1024;
	kilobytes = megabytes*1024;
	bytes = kilobytes*1024;

	printf("File capacity is \n%d megabytes,\n%d kilobytes,\n%u bytes.\n", megabytes, kilobytes, bytes);

	return 0;
}
