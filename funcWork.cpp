#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

void MINMAX(int arr[5]) {
	int min = MAXINT;
	int max = 0;
	for (int i = 0; i < 5;i++) { 

		if (arr[i] < min) {
			min = arr[i];
		}

		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "Минимум: " << min << "\n";
	cout << "Максимум: " << max << "\n";
}
void reverse(int arr[]) {
	for (int i = 4; i >= 0; i--) {
		cout << arr[i] << " ";
	}
}
int simple(int arr[]) {
	int count = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0 || arr[i] % 3 == 0 || arr[i] % 4 == 0 || arr[i] % 5 == 0 || arr[i] % 6 == 0 || arr[i] % 7 == 0 || arr[i] % 8 == 0 || arr[i] % 9 == 0)
		{
			if (arr[i] == 2 || arr[i] == 3 || arr[i] == 5 || arr[i] == 7) {
				count++;
			}
			count += 0;
		}
		else {
			count++;
		}
	}
	return count;
}

int main()
{
	setlocale(0, "");
	//srand(time(NULL));
	int arr[5] = { 1,2,3,4,5 };

	MINMAX(arr);

	cout << "\n";
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
	reverse(arr);

	cout << "\nПростых чисел: " << simple(arr) << "\n";
}
