#include "Quicksort.h"
using namespace std;
Quicksort::Quicksort(int* arr, int start, int end) {
	Array = arr;

	sort(start, end);
}

void Quicksort::sort(int start, int end) {
	if (start < end) {
		short piLo = (start + end) / 2 ;
		int pivot = Array[piLo];//Áß¾ÓÀ» ÇÇ¹þÀ¸·Î;

		int left = start;
		int right = end;

		do {
			if (Array[left] >= pivot && Array[right] <= pivot) {
				swap(left, right);
				if (Array[left] == pivot && Array[right] == pivot) left++;
				else if(pivot!=Array[left]) left++;
				else if(pivot!=Array[right]) right--;
			}
			else if (Array[right] > pivot) right--;
			else if (Array[left] < pivot) left++;
		} while (left < right);

		sort(start, left - 1);
		sort(left + 1, end);
	}
}

void Quicksort::swap(int a, int b) {
	int temp = Array[a];
	Array[a] = Array[b];
	Array[b] = temp;
}
