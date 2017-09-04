#include <iostream>
#include "Quicksort.h"
using namespace std;

int main() {
	
	int a[100];

	
	for (int i = 0; i < 100; i++) {
		a[i] = 100 - i;
		cout << a[i] << " ";
		if (i + 1 % 10 == 0)cout << '\n';
	}
	cout << '\n';

	Quicksort qs(a, 0, 99);

	for (int i = 0; i < 100; i++) {
		cout << a[i] << " ";
		if(i+1%10 == 0)cout << '\n';
	}
	cout << '\n';

}

