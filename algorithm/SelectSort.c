#include <stdio.h>
int main() {
	int array[10] = { 2,6,10,3,7,1,5,8,4,9 };
	int i, j, min, index, temp;
	for (i = 0; i < 10; i++) {
		min = 999;                  
		for (j = i; j < 10; j++) {  //앞을 제외한고 i부터 끝까지 반복
			if (min > array[j]) {
				min = array[j];    //최솟값
				index = j;         //인덱스값
			}

		}  
		//swap(교환) : 최솟값의 위치와 맨 앞 인덱스 자리를 교환
		// 원본   : { 2,6,10,3,7,1,5,8,4,9 }
		//교환 후 : { 2,3,10,6,7,1,5,8,4,9 } -> 3과 6을 교환
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}

	for (i = 0; i < 10; i++) {  
		printf("%d ", array[i]);  //결과 출력하기
	}

	return 0;
}