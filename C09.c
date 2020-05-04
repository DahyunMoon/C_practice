/*
	<파일 전송 시간 계산>
	파일 용량을 메가바이트 단위로 입력받고,
	USB 포트가 2.0인지 아닌 지를 '1' 또는 '2'으로 입력받아
	이에 따라 파일 전송 시간을 초 단위로 계산하여 출력하라.

	단, 계산 방법은 다음과 같다.
	바이트 수 = 메가바이트 수 * 1024 * 1024
	USB 1.1 전송 속도 = 1,500,000 바이트/초
	USB 2.0 전송 속도 = 60,000,000 바이트/초

	변수는 다음과 같이 사용하라.
	int megabytes; // 용량(메가바이트 단위)
	long bytes; // 용량(바이트 단위)
	int usb2; // USB 2.0 사용여부(1: 예, 2: 아니요)
	int time; // 전송시간(초 단위)
*/

# include <stdio.h>

int main(){
	int megabytes; // 용량(메가바이트 단위)
	long bytes; // 용량(바이트 단위)
	int usb2; // USB 2.0 사용여부(1: 예, 2: 아니요)
	int time; // 전송시간(초 단위)

	printf("파일 용량을 메가바이트 단위로 입력하세요. ");
	scanf("%d", &megabytes);
	bytes = megabytes * 1024 * 1024;
	
	printf("USB 포트가 2.0이면 1, 아니면 2를 입력하세요. ");
	scanf("%d", &usb2);

	if(usb2==1)
		time = bytes/60000000;
	else
		time = bytes/1500000;
		
	printf("파일 전송시간은 %d초입니다.\n", time);
	return 0;
}
