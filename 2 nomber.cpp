﻿#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;
	int sum = 0;
	cout << "Введите n:  ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << "Сумма = " << sum;
	return 0;
}
