#include <stdio.h>
int main() {
	int array[10] = { 2,6,10,3,7,1,5,8,4,9 };
	int i, j, min, index, temp;
	for (i = 0; i < 10; i++) {
		min = 999;                  
		for (j = i; j < 10; j++) {  //���� �����Ѱ� i���� ������ �ݺ�
			if (min > array[j]) {
				min = array[j];    //�ּڰ�
				index = j;         //�ε�����
			}

		}  
		//swap(��ȯ) : �ּڰ��� ��ġ�� �� �� �ε��� �ڸ��� ��ȯ
		// ����   : { 2,6,10,3,7,1,5,8,4,9 }
		//��ȯ �� : { 2,3,10,6,7,1,5,8,4,9 } -> 3�� 6�� ��ȯ
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}

	for (i = 0; i < 10; i++) {  
		printf("%d ", array[i]);  //��� ����ϱ�
	}

	return 0;
}