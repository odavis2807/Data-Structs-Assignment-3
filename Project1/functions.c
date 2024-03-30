#include <stdio.h>
#include "Header.h"

//bubble sort algorithm
void bubbleSort(int a[], int size) {
	int i, j, tmp;
	for (i = 0; i < (size - 1); i++) {
		for (j = 0; j < (size - 1) - i; j++) {
			if (a[j] > a[j + 1]) {
				// swap
				tmp = a[j]; // store a[j] in temp variable
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}

//swaps 2 ints
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
//heapifies tree
void heapify(int arr[], int N, int i) {
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < N && arr[left] > arr[largest])
		largest = left;

	if (right < N && arr[right] > arr[largest])
		largest = right;

	if (largest != i) {
		swap(&arr[i], &arr[largest]);
		heapify(arr, N, largest);
	}
}
//heap sort algorithm
void heapSort(int arr[], int N) {
	for (int i = N / 2 - 1; i >= 0; i--)
		heapify(arr, N, i);

	for (int i = N - 1; i >= 0; i--) {
		swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
	}
}