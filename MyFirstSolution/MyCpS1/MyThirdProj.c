//기능을 빌려다 쓸거에요!!
#include <stdio.h>

int main(void) //함수는 괄호
{//영역 표시중괄호 써야함
	// Body
	//변수 이름을 지을때는 알파뱃 대소문자 둘다 가능
	//int num_apples;

	int x = 1, y = 2; // 그냥 변수 선언및 initialize하기.
	int z; //연산부는 분리하자declaration


	z = x + y;
	printf("The Answer is %i.\n",1+4);
	printf("The Answer is %d.\n", z);
	printf("%i + %i = %i\n", x, y, z);
	printf("\a");
	//printf("%d", z);
	// \n 은 escape 시퀀스
	//\"를 쓰면 "를 출력 할수 있다.
	printf("\"The Truth is ...  \nI am Ironman.\"");

	return 0; //Console 마지막에 뜸 ,리턴타입이 int 이기에 0으로 해줌 그냥임

	
}
	