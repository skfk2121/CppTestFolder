#include <stdio.h>

int main() {
	//주석 
	printf("%d + %d = %d\n", 2, 3, 5);
	printf("%f\n", 3.14);
	printf("%.2f\n", 3.146592); //반올림해서 2자리까지 출력
	
	//%g 는 실수출력 단 지수형태로도 출력 .3g는 유효숫자 3개
	printf("%g\n", 3.141592);
	printf("%.3g\n", 819319313.13131);
	//%c : 문자출력 (ascii 문자표만 가능) a는 97 ,한글,한자,유니코드는 안됨
	printf("%c %c %c\n", 'a', 'b', 'c');
	//%s는 문자열,
	printf("%s\n", "안녕하세요");
}