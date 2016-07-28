#include <stdio.h>

void bubbleSort(int arr[], int begin, int end);

int main(int argc, char* argv[]) {
	int numbers[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		numbers[i] = 10 - i;
	}
	
	//Output initial array
	printf("The initial status:\n");
	for (int i = 0; i < 10; i++) {
		printf("numbers[%d] = %d\n", i, numbers[i]);
	}

	//Sorting...
	bubbleSort(numbers, 0, 9);

	//Output the sorted array
	printf("The sorted array:\n");
	for (int i = 0; i < 10; i++) {
		printf("numbers[%d] = %d\n", i, numbers[i]);
	}

	return 0;
}

void bubbleSort(int arr[], int begin, int end) {
	for (int i = end; i > begin; i--) {
		for (int j = begin; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	return;
}
