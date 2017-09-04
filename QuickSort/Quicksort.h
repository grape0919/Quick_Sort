#pragma once
#include <iostream>
class Quicksort {
public:
	int* Array = nullptr;

	Quicksort(int* arr, int start, int end);
	void sort(int, int);
	void swap(int, int);
};