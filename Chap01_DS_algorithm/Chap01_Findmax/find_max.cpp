#include <cstdio>

int findArrayMax(int score[], int n)  // 입력 형태를 첫번째 인자를 배열로 받는다 두번째는 정수
{
	int tmp = score[0];               // 0부터시작
	for (int i = 1; i < n; i++) {    // i를 1로 초기화 i가 n보다 작을때 까지 반복
		if (score[i] > tmp) {        // score[1] > tmp=1 
			tmp = score[i];
		}
	} 
	return tmp;          // tmp 값을 반환 하겠다. 
}

void main()
{
	int score[5] = {1,10,2,4,5 };
	int out;  // 출력 정수
	out = findArrayMax(score, 5);
	printf("result = %d", out);
}