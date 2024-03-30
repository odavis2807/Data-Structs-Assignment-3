#include "Header.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	srand(time(NULL));
	int randInt = rand() % (10 + 1);
	
	int arr[20000];
	for (int i = 0; i < 20000; i++)
		arr[i] = randInt;

	int arr2[20000];
	for (int i = 0; i < 20000; i++)
		arr2[i] = randInt;

	clock_t bStartTime = clock();
	bubbleSort(arr, 20000);
	clock_t bEndTime = clock();
	double bSortTime = (double)(bEndTime - bStartTime) / CLOCKS_PER_SEC;

	clock_t hStartTime = clock();
	heapSort(arr2, 20000);
	clock_t hEndTime = clock();
	double hSortTime = (double)(hEndTime - hStartTime) / CLOCKS_PER_SEC;

	printf("Bubble sort time: %fsecs\nHeap sort time: %fsecs", bSortTime, hSortTime);
}