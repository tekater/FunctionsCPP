#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

int maxmin(int arr[5]) {
	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
int maxmin(int arr[5][5]) {
	int max = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {

			if (arr[i][j] > max) {
				max = arr[i][j];
			}

		}
	}
	return max;
}
int maxmin(int arr[5][5][5]) {
	int max = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			for (int z = 0; z < 5; z++) {

				if (arr[i][j][z] > max) {
					max = arr[i][j][z];
				}
			}
		}
	}
		return max;
}

int maxmin(int a,int b) {
	int max = 0;
	if (a > b) {
		max = a;
	}
	if (b > a) {
		max = b;
	}
	return max;
}
int maxmin(int a,int b,int c) {
	int max = 0;
	if (a > b && a > c) {
		max = a;
	}
	if (b > c && b > a) {
		max = b;
	}
	if (c > a && c > b) {
		max = c;
	}
	return max;
}
int main()
{
	setlocale(0, "");
	srand(time(NULL));
	int arr[5] = {1,2,3,4,5};
	int arr2[5][5] = {};
	int arr3[5][5][5] = {};

	for (int i = 0; i < 5; i++) {
		arr[i] = 1 + rand() % 25;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr2[i][j] = 1 + rand() % 25;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			for (int z = 0; z < 5; z++) {
				arr3[i][j][z] = 1 + rand() % 25;
			}
		}
	}

	cout << "Максимальное значение 1мерный массив:" << maxmin(arr) << endl;
	cout << "Максимальное значение 2мерный массив:" << maxmin(arr2) << endl;
	cout << "Максимальное значение 3мерный массив:" << maxmin(arr3) << endl;
	cout << "Максимальное значение двух целых:" << maxmin(5, 10) << endl;
	cout << "Максимальное значение трёх целых:" << maxmin(5, 10, 15) << endl;
}
