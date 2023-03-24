#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

void one(int a, int b) {
	for (int i = 0; i < a;i++) {
		for (int j = 0; j < b; j++) {
			cout << " #";
	    }
		cout << "\n";
	}
}
int fact(int a) {
	int sum = 0;
	for (int i = 0; i < a; i++) {
		sum += i;
	}
	return sum;
}
void simple(int a) {

	if (a < 10) {

		if (a == 2 || a == 3 || a == 5 || a == 7) {
			cout << "\nПростое число\n";
		}

	}

	if (a % 2 == 0 || a % 3 == 0 || a % 4 == 0 || a % 5 == 0 || a % 6 == 0 || a % 7 == 0 || a % 8 == 0 || a % 9 == 0)
	{
		cout << "\nСложное число\n";
	}
	else {
		cout << "\nПростое число\n";
	}
}
int pow(int a) {
	return a * a * a;
}
void many(int a, int b) {
	if (a > b) {
		cout << "\nБольшее: " << a << "\n";
	}
	if(b > a) {
		cout << "\nБольшее: " << b << "\n";
	}
	if (a == b) {
		cout << "\nОни равны.\n";
	}
}
bool TF(int a) {

	if (a >= 0) {
		return true;
	}

	if (a < 0) {
		return false;
	}
}

int main()
{
	setlocale(0, "");
	//srand(time(NULL));

	one(5, 10);

	cout << "\nSum: " << fact(30) << endl;

	simple(23);

	cout << "\nВ кубе: " <<  pow(2) << "\n";

	many(5, 19);

	cout << "\nЗначение: " << TF(-1) << "\n";
}
