#include <stdio.h>


////////////////������ �ַ�� /////////////////////////////////

///////////////////////////////////////////////////////////////

void ABC(int *p, int N) {
	int i, temp, *q;
	temp = *p;
	for (q = p; q< p+N; q++) { 
		if (*p < *(q + 1)) {     // �� ���ڸ��� �ִ밪 ����
			temp = *(q+1);
			*(q+1) = *p;
			*p = temp;
		}
	}
}

int main(void) {
	int data[10], i, *p;

	for (p=data; p<data+10; p++) {
		scanf("%d", p);
	}

	for (p=data, i = 0; p<data + 9; i++,p++) {
		ABC(p, 10 - i);  // ���� ����
	}

	for (p = data; p<data + 10; p++) {
		printf(" %d", *p);
	}
	return 0;
}