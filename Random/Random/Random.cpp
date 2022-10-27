// Random
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	cout << "Генерация случайных чисел в массиве размером 20 чисел" << endl;
	const int n = 10;
	int arr[n];
	int a = 0;
	int b = 0;
	cout << "Введите начало диапазона: "; cin >> a; cout << "Введите окончание диапазона: "; cin >> b; cout << endl;
	for (int i = 0; i < n; i++)
	{
		arr[i] = a + rand() % (b - a);
	}
	int temp = 0;//переменная для обмена элементов местами
	for (int i = 0; i < n - 1; i++)  // Сортировка массива пузырьком
	{
		for (int j = 0; j < n - i - 1; j++) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				temp = arr[j]; // меняем элементы местами
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) 
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

}

