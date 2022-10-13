// Array_DZ

#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	const int Size = 5;
	int Array[Size] = { };
	cout << "Введите " << 0 << " элемент массива: "; cin >> Array[0];
	cout << "Введите " << 1 << " элемент массива: "; cin >> Array[1];
	cout << "Введите " << 2 << " элемент массива: "; cin >> Array[2];
	cout << "Введите " << 3 << " элемент массива: "; cin >> Array[3];
	cout << "Введите " << 4 << " элемент массива: "; cin >> Array[4];
	Sleep(700);
	system("cls");
	cout << "Ваш массив: ";
	for (int i = 0; i < Size; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;

	cout << "Массив в обратном порядке: ";
	for (int i = Size - 1; i >= 0; i--)
	{
		cout << Array[i] << " ";
	}
	cout << endl;

	int Summa = 0;
	for (int i = 0; i < Size; i++)
	{
		Summa = Summa + Array[i];
	}
	cout << "Сумма элементов массива: " << Summa; cout << endl;
	cout << "Среднее-арифметическое массива: " << Summa / Size; cout << endl;
	int Min = Array[0]; int Max = Array[0];
	for (int i = 0; i < Size; i++)
	{
		if (Min > Array[i]) Min = Array[i];
		if (Max < Array[i]) Max = Array[i];
	}
	cout << "Минимальное число массива: " << Min << "\n" << "Максимальное число массива: " << Max; cout << endl;
}