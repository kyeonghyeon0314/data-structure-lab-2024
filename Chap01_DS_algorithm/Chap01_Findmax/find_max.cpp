#include <cstdio>

int findArrayMax(int score[], int n)  // �Է� ���¸� ù��° ���ڸ� �迭�� �޴´� �ι�°�� ����
{
	int tmp = score[0];               // 0���ͽ���
	for (int i = 1; i < n; i++) {    // i�� 1�� �ʱ�ȭ i�� n���� ������ ���� �ݺ�
		if (score[i] > tmp) {        // score[1] > tmp=1 
			tmp = score[i];
		}
	} 
	return tmp;          // tmp ���� ��ȯ �ϰڴ�. 
}

void main()
{
	int score[5] = {1,10,2,4,5 };
	int out;  // ��� ����
	out = findArrayMax(score, 5);
	printf("result = %d", out);
}