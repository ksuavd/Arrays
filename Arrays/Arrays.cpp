// Arrays

#include <iostream>

using namespace std;

//#define ONE
//#define TWO
int main()
{
	setlocale(LC_ALL, "rus");
#ifdef ONE
	//cout << "Hello, Arrays!" << endl;
	const int SIZE = 5;
	int arr[SIZE] = {};
	//arr[3] = 123;//обращение к элементу массива на запись 
	//cout << arr[3] << endl;//обращение к элементу массива на чтение
	cout << "Введите значения элементов массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Вывод массива на экран: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Массив в обратном порядке: ";
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее-арифметическое массива: " << (double)sum / SIZE; cout << endl;
	int min, max;
	min =
		max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}
	cout << "Минимальное значение массива: " << min << "\n" << "Максимальное значение массива: " << max; cout << endl;
#endif
#ifdef TWO

	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int number_of_shifts;
	cout << "Ввести количество сдвигов: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl; 
#endif


}


